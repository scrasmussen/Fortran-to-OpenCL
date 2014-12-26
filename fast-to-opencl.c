#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_TranslationUnit_1;
static Symbol sym_Compound_2;
static Symbol sym_Stat_1;
static Symbol sym_AssignEq_0;
static Symbol sym_Assign_3;
static Symbol sym_FloatConst_1;
static Symbol sym_Positive_1;
static Symbol sym_Negative_1;
static Symbol sym_Id_1;
static Symbol sym_ArrayIndex_2;
static Symbol sym_Subt_2;
static Symbol sym_Add_2;
static Symbol sym_Mul_2;
static Symbol sym__2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_RealLiteralConstant_2;
static Symbol sym_PartRef_3;
static Symbol sym_Mult_2;
static Symbol sym_Plus_1;
static Symbol sym_Minus_1;
static Symbol sym_Plus_2;
static Symbol sym_Minus_2;
static Symbol sym_AssignmentStmt_4;
static Symbol sym_OfpExecPart_1;
static Symbol sym_OfpProgram_2;
static void init_module_constructors (void)
{
sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
ATprotectSymbol(sym_TranslationUnit_1);
sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
ATprotectSymbol(sym_Compound_2);
sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
ATprotectSymbol(sym_Stat_1);
sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
ATprotectSymbol(sym_AssignEq_0);
sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
ATprotectSymbol(sym_Assign_3);
sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
ATprotectSymbol(sym_FloatConst_1);
sym_Positive_1 = ATmakeSymbol("Positive", 1, ATfalse);
ATprotectSymbol(sym_Positive_1);
sym_Negative_1 = ATmakeSymbol("Negative", 1, ATfalse);
ATprotectSymbol(sym_Negative_1);
sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
ATprotectSymbol(sym_Id_1);
sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
ATprotectSymbol(sym_ArrayIndex_2);
sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
ATprotectSymbol(sym_Subt_2);
sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
ATprotectSymbol(sym_Add_2);
sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
ATprotectSymbol(sym_Mul_2);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_RealLiteralConstant_2 = ATmakeSymbol("RealLiteralConstant", 2, ATfalse);
ATprotectSymbol(sym_RealLiteralConstant_2);
sym_PartRef_3 = ATmakeSymbol("PartRef", 3, ATfalse);
ATprotectSymbol(sym_PartRef_3);
sym_Mult_2 = ATmakeSymbol("Mult", 2, ATfalse);
ATprotectSymbol(sym_Mult_2);
sym_Plus_1 = ATmakeSymbol("Plus", 1, ATfalse);
ATprotectSymbol(sym_Plus_1);
sym_Minus_1 = ATmakeSymbol("Minus", 1, ATfalse);
ATprotectSymbol(sym_Minus_1);
sym_Plus_2 = ATmakeSymbol("Plus", 2, ATfalse);
ATprotectSymbol(sym_Plus_2);
sym_Minus_2 = ATmakeSymbol("Minus", 2, ATfalse);
ATprotectSymbol(sym_Minus_2);
sym_AssignmentStmt_4 = ATmakeSymbol("AssignmentStmt", 4, ATfalse);
ATprotectSymbol(sym_AssignmentStmt_4);
sym_OfpExecPart_1 = ATmakeSymbol("OfpExecPart", 1, ATfalse);
ATprotectSymbol(sym_OfpExecPart_1);
sym_OfpProgram_2 = ATmakeSymbol("OfpProgram", 2, ATfalse);
ATprotectSymbol(sym_OfpProgram_2);
}
static ATerm term11;
static ATerm term10;
static ATerm term9;
static ATerm term8;
static ATerm term7;
static ATerm term6;
static ATerm term5;
static ATerm term4;
static ATerm term3;
static ATerm term2;
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("-n", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("-n               Binding name to be selected", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: fast-to-c -n binding_name", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n   This program generates a ROSE AST from a Fortran AST (FAST).\n", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("Written by Soren Rasmussen <soren.rasmussen@aggiemail.usu.edu>", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_AssignEq_0);
ATprotect(&(term11));
term11 = term10;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm extend_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_4_0 (StrSL sl, StrCL h_107, StrCL n_107, StrCL p_107, StrCL q_107, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL e_105, StrCL f_105, StrCL g_105, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL x_104, StrCL y_104, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm b_314 (StrSL sl, StrCL d_314, ATerm t);
ATerm fast_to_c_start_0_0 (StrSL sl, ATerm t);
static ATerm c_314 (StrSL sl, ATerm t);
ATerm fast_to_c_about_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm io_fast_to_c_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = io_fast_to_c_0_0(sl, t);
if((t == NULL))
goto fail13 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm fast_to_c_start_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fast_to_c_start_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_314 = { &(c_314) , sl };
StrCL lifted10_cl = &(p_314);
t = b_314(&(frame), lifted10_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm b_314 (StrSL sl, StrCL d_314, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "b_314";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, d_314);
{
struct str_closure o_314 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(o_314);
t = SRTS_all(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail11 ;
t = cl_fun(d_314)(cl_sl(d_314), t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = b_314(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm c_314 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "c_314";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm trm1 = t;
ATerm j_313 = NULL,k_313 = NULL;
if(match_cons(t, sym_Mult_2))
{
j_313 = ATgetArgument(t, 0);
k_313 = ATgetArgument(t, 1);
}
else
goto label3 ;
t = (ATerm) ATmakeAppl(sym_Mul_2, j_313, k_313);
goto label2 ;
label3 :
t = trm1;
{
ATerm trm2 = t;
ATerm l_313 = NULL;
if(match_cons(t, sym_Plus_1))
{
l_313 = ATgetArgument(t, 0);
}
else
goto label4 ;
t = (ATerm) ATmakeAppl(sym_Positive_1, l_313);
goto label2 ;
label4 :
t = trm2;
{
ATerm trm3 = t;
ATerm m_313 = NULL;
if(match_cons(t, sym_Minus_1))
{
m_313 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = (ATerm) ATmakeAppl(sym_Negative_1, m_313);
goto label2 ;
label5 :
t = trm3;
{
ATerm trm4 = t;
ATerm n_313 = NULL,p_313 = NULL;
if(match_cons(t, sym_Plus_2))
{
n_313 = ATgetArgument(t, 0);
p_313 = ATgetArgument(t, 1);
}
else
goto label6 ;
t = (ATerm) ATmakeAppl(sym_Add_2, n_313, p_313);
goto label2 ;
label6 :
t = trm4;
{
ATerm trm5 = t;
ATerm q_313 = NULL,r_313 = NULL;
if(match_cons(t, sym_Minus_2))
{
q_313 = ATgetArgument(t, 0);
r_313 = ATgetArgument(t, 1);
}
else
goto label7 ;
t = (ATerm) ATmakeAppl(sym_Subt_2, q_313, r_313);
goto label2 ;
label7 :
t = trm5;
{
ATerm trm6 = t;
ATerm s_313 = NULL,t_313 = NULL,u_313 = NULL,v_313 = NULL;
ATerm trm7 = t;
if(match_cons(t, sym_PartRef_3))
{
t_313 = ATgetArgument(t, 0);
{
ATerm trm8 = ATgetArgument(t, 1);
if(((ATgetType(trm8) == AT_LIST) && !(ATisEmpty(trm8))))
{
u_313 = ATgetFirst((ATermList) trm8);
{
ATerm trm9 = (ATerm) ATgetNext((ATermList) trm8);
if(!(((ATgetType(trm9) == AT_LIST) && ATisEmpty(trm9))))
goto label10 ;
}
}
else
goto label10 ;
}
s_313 = ATgetArgument(t, 2);
}
else
goto label10 ;
t = (ATerm) ATmakeAppl(sym_ArrayIndex_2, (ATerm)ATmakeAppl(sym_Id_1, t_313), u_313);
goto label9 ;
label10 :
t = trm7;
if(match_cons(t, sym_RealLiteralConstant_2))
{
v_313 = ATgetArgument(t, 0);
{
ATerm trm10 = ATgetArgument(t, 1);
}
}
else
goto label8 ;
t = (ATerm) ATmakeAppl(sym_FloatConst_1, v_313);
goto label9 ;
label9 :
;
goto label2 ;
label8 :
t = trm6;
{
ATerm w_313 = NULL,x_313 = NULL,y_313 = NULL,a_314 = NULL;
ATerm trm11 = t;
if(match_cons(t, sym_AssignmentStmt_4))
{
ATerm trm12 = ATgetArgument(t, 0);
w_313 = ATgetArgument(t, 1);
x_313 = ATgetArgument(t, 2);
{
ATerm trm13 = ATgetArgument(t, 3);
}
}
else
goto label11 ;
t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, w_313, term11, x_313));
goto label2 ;
label11 :
t = trm11;
{
ATerm trm14 = t;
if(match_cons(t, sym_OfpExecPart_1))
{
y_313 = ATgetArgument(t, 0);
}
else
goto label12 ;
t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, y_313);
goto label2 ;
label12 :
t = trm14;
if(match_cons(t, sym_OfpProgram_2))
{
ATerm trm15 = ATgetArgument(t, 0);
a_314 = ATgetArgument(t, 1);
}
else
goto label1 ;
t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, a_314);
goto label2 ;
}
}
}
}
}
}
}
label2 :
;
goto label0 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm fast_to_c_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fast_to_c_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
t = echo_0_0(sl, t);
if((t == NULL))
goto fail8 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm io_fast_to_c_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "io_fast_to_c_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_314 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(j_314);
struct str_closure k_314 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(k_314);
struct str_closure m_314 = { &(fast_to_c_about_0_0) , sl };
StrCL lifted7_cl = &(m_314);
struct str_closure n_314 = { &(fast_to_c_start_0_0) , sl };
StrCL lifted8_cl = &(n_314);
t = io_wrap_4_0(sl, lifted0_cl, lifted4_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_314 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(h_314);
struct str_closure i_314 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(i_314);
t = default_system_usage_2_0(sl_up(sl), lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_314 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(e_314);
struct str_closure f_314 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(f_314);
struct str_closure g_314 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(g_314);
t = ArgOption_3_0(sl_up(sl), lifted1_cl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
y_43 = t;
a_44 = t;
z_43 = t;
t = (ATerm) ATmakeAppl(sym__2, term1, (ATerm) ATinsert(ATempty, z_43));
t = extend_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
t = y_43;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-n", 0, ATtrue))))
goto fail2 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static void register_strategies (void)
{
int initial_size = 117;
int max_load = 75;
struct str_closure * closures;
int closures_index = 0;
if((strategy_table == NULL))
strategy_table = ATtableCreate(initial_size, max_load);
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 19));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(echo_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(extend_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("extend_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(b_314);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("b_314", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fast_to_c_start_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fast_to_c_start_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(c_314);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("c_314", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fast_to_c_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fast_to_c_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_fast_to_c_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_fast_to_c_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
}
int main (int argc, char * argv [])
{
ATerm out_term;
ATermList in_term;
int i;
ATinit(argc, argv, &(out_term));
init_constructors();
in_term = ATempty;
for ( i = (argc - 1) ; (i >= 0) ; i-- )
{
in_term = ATinsert(in_term, (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i], 0, ATtrue)));
}
SRTS_stratego_initialize();
memset(__tracing_table, 0, (sizeof(unsigned short) * TRACING_TABLE_SIZE));
__tracing_table_counter = 0;
register_strategies();
out_term = main_0_0(NULL, (ATerm) in_term);
if((out_term != NULL))
{
ATfprintf(stdout, "%t\n", out_term);
exit(0);
}
else
{
ATfprintf(stderr, "%s: rewriting failed, trace:\n", argv[0]);
for ( i = 0 ; (__tracing_table[i] && (i < TRACING_TABLE_SIZE)) ; i++ )
ATfprintf(stderr, "\t%s\n", __tracing_table[i]);
exit(1);
}
}
