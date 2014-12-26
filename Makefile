include ../ofp-sdf/make.inc
#include lope-lower.dep
#include lope-to-foropencl.dep

SYNTAX_DIR = ../ofp-sdf/LOPe/syntax
TRANS_DIR  = ../ofp-sdf/fortran/trans
PP_DIR     = ../ofp-sdf/fortran/pp

TBL     = $(SYNTAX_DIR)/LOPe.tbl
TO_SIM  = $(TRANS_DIR)/ofp-simplify
TO_FAST = $(TRANS_DIR)/ofp2fast
TO_PP   = $(TRANS_DIR)/fast2pp
PP      = $(PP_DIR)/Fortran.pp

CFLAGS = $(ST_CFLAGS) -I ../ofp-sdf/LOPe/syntax -I ../ofp-sdf/fortran/syntax -I ../ofp-sdf/fortran/trans
LDFLAGS = $(ST_LDFLAGS) -la stratego-lib

all : fast-to-c

fast-to-c : fast-to-c.str
	$(ST_PATH)/strc -i fast-to-c.str $(CFLAGS) $(LDFLAGS) --main io-fast-to-c

#lope-to-foropencl : lope-to-foropencl.str
#	$(ST_PATH)/strc -i lope-to-foropencl.str $(CFLAGS) $(LDFLAGS) --main io-lope-to-foropencl

test:
	sglri -p C-Files/C.tbl -i test.c | pp-aterm

check : fast-to-c
	clear
	sglri -p $(TBL) -i restrict.lope | $(TO_FAST) | fast-to-c | $(TO_PP) | ast2text -p $(PP)

clean :
	rm -f fast-to-c fast-to-c.c
	rm -f fast-to-c fast-to-c.c
	rm -f *.o *.lo *.dep
