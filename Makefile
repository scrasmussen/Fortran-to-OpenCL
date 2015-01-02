include make.inc
#include lope-lower.dep
#include lope-to-foropencl.dep

SYNTAX_DIR = $(OFP_PATH)/fortran/syntax
TRANS_DIR  = $(OFP_PATH)/fortran/trans
PP_DIR     = $(OFP_PATH)/fortran/pp

TBL     = $(OFP_PATH)/LOPe/syntax/LOPe.tbl
TO_SIM  = $(TRANS_DIR)/ofp-simplify
TO_FAST = $(TRANS_DIR)/ofp2fast
TO_PP   = $(TRANS_DIR)/fast2pp
PP      = $(PP_DIR)/Fortran.pp

CFLAGS = $(ST_CFLAGS) -I $(OFP_PATH)/LOPe/syntax -I $(SYNTAX_DIR) -I $(TRANS_DIR)
LDFLAGS = $(ST_LDFLAGS) -la stratego-lib

all : fast-to-opencl

fast-to-opencl : fast-to-opencl.str
	$(ST_PATH)/strc -i fast-to-opencl.str $(CFLAGS) $(LDFLAGS) --main io-fast-to-opencl

#lope-to-foropencl : lope-to-foropencl.str
#	$(ST_PATH)/strc -i lope-to-foropencl.str $(CFLAGS) $(LDFLAGS) --main io-lope-to-foropencl

test:
	sglri -p C-Files/C.tbl -i test.c | pp-aterm

check : fast-to-opencl
	clear
	sglri -p $(TBL) -i restrict.lope | $(TO_FAST) | fast-to-opencl | ast2text -p C-Files/C.pp

clean :
	rm -f fast-to-opencl fast-to-opencl.c
	rm -f fast-to-opencl fast-to-opencl.c
	rm -f *.o *.lo *.dep
