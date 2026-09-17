// Lean compiler output
// Module: JSP_000320
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_fallingFactorial(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_fallingFactorial___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_factorial(lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_factorial___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_binom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_binom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_fallingFactorial(lean_object* v_n_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_zero_3_; uint8_t v_isZero_4_; 
v_zero_3_ = lean_unsigned_to_nat(0u);
v_isZero_4_ = lean_nat_dec_eq(v_x_2_, v_zero_3_);
if (v_isZero_4_ == 1)
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(1u);
return v___x_5_;
}
else
{
lean_object* v_one_6_; lean_object* v_n_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_one_6_ = lean_unsigned_to_nat(1u);
v_n_7_ = lean_nat_sub(v_x_2_, v_one_6_);
v___x_8_ = lean_nat_sub(v_n_1_, v_n_7_);
v___x_9_ = lp_jsp_x2d000320_x2dformalization_fallingFactorial(v_n_1_, v_n_7_);
lean_dec(v_n_7_);
v___x_10_ = lean_nat_mul(v___x_8_, v___x_9_);
lean_dec(v___x_9_);
lean_dec(v___x_8_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_fallingFactorial___boxed(lean_object* v_n_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_jsp_x2d000320_x2dformalization_fallingFactorial(v_n_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_n_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_factorial(lean_object* v_x_14_){
_start:
{
lean_object* v_zero_15_; uint8_t v_isZero_16_; 
v_zero_15_ = lean_unsigned_to_nat(0u);
v_isZero_16_ = lean_nat_dec_eq(v_x_14_, v_zero_15_);
if (v_isZero_16_ == 1)
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1u);
return v___x_17_;
}
else
{
lean_object* v_one_18_; lean_object* v_n_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_one_18_ = lean_unsigned_to_nat(1u);
v_n_19_ = lean_nat_sub(v_x_14_, v_one_18_);
v___x_20_ = lean_nat_add(v_n_19_, v_one_18_);
v___x_21_ = lp_jsp_x2d000320_x2dformalization_factorial(v_n_19_);
lean_dec(v_n_19_);
v___x_22_ = lean_nat_mul(v___x_20_, v___x_21_);
lean_dec(v___x_21_);
lean_dec(v___x_20_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_factorial___boxed(lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_jsp_x2d000320_x2dformalization_factorial(v_x_23_);
lean_dec(v_x_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_binom(lean_object* v_n_25_, lean_object* v_k_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lp_jsp_x2d000320_x2dformalization_fallingFactorial(v_n_25_, v_k_26_);
v___x_28_ = lp_jsp_x2d000320_x2dformalization_factorial(v_k_26_);
v___x_29_ = lean_nat_div(v___x_27_, v___x_28_);
lean_dec(v___x_28_);
lean_dec(v___x_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* lp_jsp_x2d000320_x2dformalization_binom___boxed(lean_object* v_n_30_, lean_object* v_k_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lp_jsp_x2d000320_x2dformalization_binom(v_n_30_, v_k_31_);
lean_dec(v_k_31_);
lean_dec(v_n_30_);
return v_res_32_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_jsp_x2d000320_x2dformalization_JSP__000320(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
