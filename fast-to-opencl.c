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
static Symbol sym_TypeDeclarationStmt_5;
static Symbol sym_EntityDecl_5;
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
sym_TypeDeclarationStmt_5 = ATmakeSymbol("TypeDeclarationStmt", 5, ATfalse);
ATprotectSymbol(sym_TypeDeclarationStmt_5);
sym_EntityDecl_5 = ATmakeSymbol("EntityDecl", 5, ATfalse);
ATprotectSymbol(sym_EntityDecl_5);
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("HELLO ", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("KEYS:------- ", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("VALS:------- ", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_AssignEq_0);
ATprotect(&(term7));
term7 = term6;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm hashtable_values_0_0 (StrSL sl, ATerm t);
ATerm hashtable_keys_0_0 (StrSL sl, ATerm t);
ATerm hashtable_put_0_2 (StrSL sl, ATerm t_160, ATerm u_160, ATerm t);
ATerm new_hashtable_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL m_153, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL s_124, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL d_117, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL e_114, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL f_108, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm fast_get_symbols_0_1 (StrSL sl, ATerm w_44, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm fast_to_opencl_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_314 = { &(fast_to_opencl_0_0) , sl };
StrCL lifted7_cl = &(e_314);
t = io_wrap_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm fast_get_symbols_0_1 (StrSL sl, ATerm w_44, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fast_get_symbols_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
sl_init_var(0, w_44);
{
ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
sl_init_var(1, y_44);
sl_init_var(2, z_44);
if(match_cons(t, sym_TypeDeclarationStmt_5))
{
x_44 = ATgetArgument(t, 0);
if((y_44 == NULL))
{
y_44 = ATgetArgument(t, 1);
}
else
if((y_44 != ATgetArgument(t, 1)))
goto fail6 ;
if((z_44 == NULL))
{
z_44 = ATgetArgument(t, 2);
}
else
if((z_44 != ATgetArgument(t, 2)))
goto fail6 ;
a_45 = ATgetArgument(t, 3);
b_45 = ATgetArgument(t, 4);
}
else
goto fail6 ;
t = a_45;
{
struct str_closure c_314 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(c_314);
t = map_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure d_314 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(d_314);
t = map_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail6 ;
if(((y_44 == NULL) || (z_44 == NULL)))
goto fail6 ;
else
{
t = (ATerm) ATmakeAppl(sym_TypeDeclarationStmt_5, x_44, y_44, z_44, a_45, b_45);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_313 = NULL,n_313 = NULL,p_313 = NULL,t_313 = NULL,u_313 = NULL,v_313 = NULL,q_313 = NULL,r_313 = NULL,s_313 = NULL;
t_313 = t;
if((sl_readvar(0, sl) == NULL))
goto fail8 ;
else
{
t = sl_readvar(0, sl);
}
m_313 = t;
t = t_313;
u_313 = t;
if((sl_readvar(1, sl) == NULL))
goto fail8 ;
else
{
t = sl_readvar(1, sl);
}
n_313 = t;
t = u_313;
v_313 = t;
if((sl_readvar(2, sl) == NULL))
goto fail8 ;
else
{
t = sl_readvar(2, sl);
}
p_313 = t;
t = v_313;
q_313 = t;
t = m_313;
s_313 = t;
t = (ATerm) ATmakeAppl(sym__2, n_313, p_313);
r_313 = t;
t = s_313;
t = hashtable_put_0_2(sl_up(sl), q_313, r_313, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_313 = NULL;
if(match_cons(t, sym_EntityDecl_5))
{
l_313 = ATgetArgument(t, 0);
{
ATerm trm16 = ATgetArgument(t, 1);
}
{
ATerm trm17 = ATgetArgument(t, 2);
}
{
ATerm trm18 = ATgetArgument(t, 3);
}
{
ATerm trm19 = ATgetArgument(t, 4);
}
}
else
goto fail7 ;
t = l_313;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm fast_to_opencl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fast_to_opencl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm trm0 = t;
ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
sl_init_var(0, u_44);
if(match_cons(t, sym_OfpProgram_2))
{
s_44 = ATgetArgument(t, 0);
t_44 = ATgetArgument(t, 1);
}
else
goto label1 ;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto label1 ;
if((u_44 == NULL))
{
u_44 = t;
}
else
if((u_44 != t))
goto label1 ;
t = (ATerm) ATmakeAppl(sym_OfpProgram_2, s_44, t_44);
{
struct str_closure w_313 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(w_313);
t = debug_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto label1 ;
{
struct str_closure y_313 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(y_313);
t = topdown_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto label1 ;
if((u_44 == NULL))
goto label1 ;
else
{
t = u_44;
}
t = hashtable_keys_0_0(sl, t);
if((t == NULL))
goto label1 ;
{
struct str_closure a_314 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(a_314);
t = debug_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto label1 ;
if((u_44 == NULL))
goto label1 ;
else
{
t = u_44;
}
t = hashtable_values_0_0(sl, t);
if((t == NULL))
goto label1 ;
{
struct str_closure b_314 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(b_314);
t = debug_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto label1 ;
t = (ATerm) ATmakeAppl(sym_OfpProgram_2, s_44, t_44);
}
}
}
}
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm q_44 = NULL,r_44 = NULL;
if(match_cons(t, sym_Mult_2))
{
q_44 = ATgetArgument(t, 0);
r_44 = ATgetArgument(t, 1);
}
else
goto label2 ;
t = (ATerm) ATmakeAppl(sym_Mul_2, q_44, r_44);
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
ATerm p_44 = NULL;
if(match_cons(t, sym_Plus_1))
{
p_44 = ATgetArgument(t, 0);
}
else
goto label3 ;
t = (ATerm) ATmakeAppl(sym_Positive_1, p_44);
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
ATerm o_44 = NULL;
if(match_cons(t, sym_Minus_1))
{
o_44 = ATgetArgument(t, 0);
}
else
goto label4 ;
t = (ATerm) ATmakeAppl(sym_Negative_1, o_44);
goto label0 ;
label4 :
t = trm3;
{
ATerm trm4 = t;
ATerm m_44 = NULL,n_44 = NULL;
if(match_cons(t, sym_Plus_2))
{
m_44 = ATgetArgument(t, 0);
n_44 = ATgetArgument(t, 1);
}
else
goto label5 ;
t = (ATerm) ATmakeAppl(sym_Add_2, m_44, n_44);
goto label0 ;
label5 :
t = trm4;
{
ATerm trm5 = t;
ATerm k_44 = NULL,l_44 = NULL;
if(match_cons(t, sym_Minus_2))
{
k_44 = ATgetArgument(t, 0);
l_44 = ATgetArgument(t, 1);
}
else
goto label6 ;
t = (ATerm) ATmakeAppl(sym_Subt_2, k_44, l_44);
goto label0 ;
label6 :
t = trm5;
{
ATerm trm6 = t;
ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
ATerm trm7 = t;
if(match_cons(t, sym_PartRef_3))
{
h_44 = ATgetArgument(t, 0);
{
ATerm trm8 = ATgetArgument(t, 1);
if(((ATgetType(trm8) == AT_LIST) && !(ATisEmpty(trm8))))
{
i_44 = ATgetFirst((ATermList) trm8);
{
ATerm trm9 = (ATerm) ATgetNext((ATermList) trm8);
if(!(((ATgetType(trm9) == AT_LIST) && ATisEmpty(trm9))))
goto label9 ;
}
}
else
goto label9 ;
}
g_44 = ATgetArgument(t, 2);
}
else
goto label9 ;
t = (ATerm) ATmakeAppl(sym_ArrayIndex_2, (ATerm)ATmakeAppl(sym_Id_1, h_44), i_44);
goto label8 ;
label9 :
t = trm7;
if(match_cons(t, sym_RealLiteralConstant_2))
{
j_44 = ATgetArgument(t, 0);
{
ATerm trm10 = ATgetArgument(t, 1);
}
}
else
goto label7 ;
t = (ATerm) ATmakeAppl(sym_FloatConst_1, j_44);
goto label8 ;
label8 :
;
goto label0 ;
label7 :
t = trm6;
{
ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
ATerm trm11 = t;
if(match_cons(t, sym_AssignmentStmt_4))
{
ATerm trm12 = ATgetArgument(t, 0);
c_44 = ATgetArgument(t, 1);
d_44 = ATgetArgument(t, 2);
{
ATerm trm13 = ATgetArgument(t, 3);
}
}
else
goto label10 ;
t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, c_44, term7, d_44));
goto label0 ;
label10 :
t = trm11;
{
ATerm trm14 = t;
if(match_cons(t, sym_OfpExecPart_1))
{
e_44 = ATgetArgument(t, 0);
}
else
goto label11 ;
t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, e_44);
goto label0 ;
label11 :
t = trm14;
if(match_cons(t, sym_OfpProgram_2))
{
ATerm trm15 = ATgetArgument(t, 0);
f_44 = ATgetArgument(t, 1);
}
else
goto fail0 ;
t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, f_44);
goto label0 ;
}
}
}
}
}
}
}
}
label0 :
;
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
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
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
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_313 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(x_313);
t = try_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail3 ;
else
{
t = fast_get_symbols_0_1(sl_up(sl_up(sl)), sl_readvar(0, sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
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
closures[closures_index].fun = &(hashtable_values_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_values_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_keys_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_keys_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_put_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_put_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_hashtable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_hashtable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fast_get_symbols_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fast_get_symbols_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(fast_to_opencl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fast_to_opencl_0_0", 0, ATtrue)), &(closures[closures_index]));
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
