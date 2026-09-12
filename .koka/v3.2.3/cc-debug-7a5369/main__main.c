// Koka generated module: main/@main, koka version: 3.2.3, platform: 64-bit
#include "main__main.h"


// lift anonymous function
struct kk_main__main__expr_fun31__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__main__expr_fun31(kk_function_t _fself, kk_box_t _b_x3, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun31(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun31, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__main__expr_fun31(kk_function_t _fself, kk_box_t _b_x3, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__document _x_x32;
  kk_main__document _x_x33 = kk_main__document_unbox(_b_x3, KK_OWNED, _ctx); /*main/document*/
  _x_x32 = kk_main_document_fs_interp(_x_x33, _ctx); /*main/document*/
  return kk_main__document_box(_x_x32, _ctx);
}


// lift anonymous function
struct kk_main__main__expr_fun34__t {
  struct kk_function_s _base;
};
static bool kk_main__main__expr_fun34(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun34(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun34, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main__main__expr_fun34(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__document _x_x35 = kk_main__document_unbox(_b_x4, KK_OWNED, _ctx); /*main/document*/
  kk_main__document _x_x36 = kk_main__document_unbox(_b_x5, KK_OWNED, _ctx); /*main/document*/
  return kk_main_document_fs__lp__eq__eq__rp_(_x_x35, _x_x36, _ctx);
}


// lift anonymous function
struct kk_main__main__expr_fun42__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__main__expr_fun42(kk_function_t _fself, kk_main__item _x1_x41, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun42(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun42, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_main__main__expr_fun42(kk_function_t _fself, kk_main__item _x1_x41, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_main_item_fs_show(_x1_x41, _ctx);
}


// lift anonymous function
struct kk_main__main__expr_fun47__t {
  struct kk_function_s _base;
  kk_function_t _b_x10_13;
};
static kk_string_t kk_main__main__expr_fun47(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun47(kk_function_t _b_x10_13, kk_context_t* _ctx) {
  struct kk_main__main__expr_fun47__t* _self = kk_function_alloc_as(struct kk_main__main__expr_fun47__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__main__expr_fun47, kk_context());
  _self->_b_x10_13 = _b_x10_13;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_main__main__expr_fun47(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  struct kk_main__main__expr_fun47__t* _self = kk_function_as(struct kk_main__main__expr_fun47__t*, _fself, _ctx);
  kk_function_t _b_x10_13 = _self->_b_x10_13; /* (it__derived_show : main/item) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x10_13, _ctx);}, {}, _ctx)
  kk_main__item _x_x48 = kk_main__item_unbox(_b_x11, KK_OWNED, _ctx); /*main/item*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_main__item, kk_context_t*), _b_x10_13, (_b_x10_13, _x_x48, _ctx), _ctx);
}

kk_unit_t kk_main__main__expr(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_main__document x_10000;
  kk_box_t _x_x28;
  kk_box_t _x_x29;
  kk_main__document _x_x30 = kk_main__document_dup(kk_main_example_fs_document, _ctx); /*main/document*/
  _x_x29 = kk_main__document_box(_x_x30, _ctx); /*2599*/
  _x_x28 = kk_main_fixpoint(_x_x29, kk_main__main__new_expr_fun31(_ctx), kk_main__main__new_expr_fun34(_ctx), _ctx); /*2599*/
  x_10000 = kk_main__document_unbox(_x_x28, KK_OWNED, _ctx); /*main/document*/
  kk_string_t _x_x37;
  kk_string_t _x_x38;
  kk_define_string_literal(static, _s_x39, 9, "Document(", _ctx)
  _x_x38 = kk_string_dup(_s_x39, _ctx); /*string*/
  kk_string_t _x_x40;
  kk_std_core_types__list _b_x9_12;
  {
    kk_std_core_types__list _x = x_10000.items;
    _b_x9_12 = _x; /*list<main/item>*/
  }
  kk_function_t _b_x10_13 = kk_main__main__new_expr_fun42(_ctx); /*(it__derived_show : main/item) -> string*/;
  kk_string_t _x_x43;
  kk_define_string_literal(static, _s_x44, 6, "items=", _ctx)
  _x_x43 = kk_string_dup(_s_x44, _ctx); /*string*/
  kk_string_t _x_x45;
  kk_string_t _x_x46 = kk_std_core_list_show(_b_x9_12, kk_main__main__new_expr_fun47(_b_x10_13, _ctx), _ctx); /*string*/
  kk_string_t _x_x49;
  kk_define_string_literal(static, _s_x50, 1, ")", _ctx)
  _x_x49 = kk_string_dup(_s_x50, _ctx); /*string*/
  _x_x45 = kk_std_core_types__lp__plus__plus__rp_(_x_x46, _x_x49, _ctx); /*string*/
  _x_x40 = kk_std_core_types__lp__plus__plus__rp_(_x_x43, _x_x45, _ctx); /*string*/
  _x_x37 = kk_std_core_types__lp__plus__plus__rp_(_x_x38, _x_x40, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x37, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main__main__main_fun54__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__main__main_fun54(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun54(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun54, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__main__main_fun54(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__document _x_x55;
  kk_main__document _x_x56 = kk_main__document_unbox(_b_x17, KK_OWNED, _ctx); /*main/document*/
  _x_x55 = kk_main_document_fs_interp(_x_x56, _ctx); /*main/document*/
  return kk_main__document_box(_x_x55, _ctx);
}


// lift anonymous function
struct kk_main__main__main_fun57__t {
  struct kk_function_s _base;
};
static bool kk_main__main__main_fun57(kk_function_t _fself, kk_box_t _b_x18, kk_box_t _b_x19, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun57(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun57, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main__main__main_fun57(kk_function_t _fself, kk_box_t _b_x18, kk_box_t _b_x19, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__document _x_x58 = kk_main__document_unbox(_b_x18, KK_OWNED, _ctx); /*main/document*/
  kk_main__document _x_x59 = kk_main__document_unbox(_b_x19, KK_OWNED, _ctx); /*main/document*/
  return kk_main_document_fs__lp__eq__eq__rp_(_x_x58, _x_x59, _ctx);
}


// lift anonymous function
struct kk_main__main__main_fun65__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__main__main_fun65(kk_function_t _fself, kk_main__item _x1_x64, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun65(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun65, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_main__main__main_fun65(kk_function_t _fself, kk_main__item _x1_x64, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_main_item_fs_show(_x1_x64, _ctx);
}


// lift anonymous function
struct kk_main__main__main_fun70__t {
  struct kk_function_s _base;
  kk_function_t _b_x24_27;
};
static kk_string_t kk_main__main__main_fun70(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun70(kk_function_t _b_x24_27, kk_context_t* _ctx) {
  struct kk_main__main__main_fun70__t* _self = kk_function_alloc_as(struct kk_main__main__main_fun70__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__main__main_fun70, kk_context());
  _self->_b_x24_27 = _b_x24_27;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_main__main__main_fun70(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  struct kk_main__main__main_fun70__t* _self = kk_function_as(struct kk_main__main__main_fun70__t*, _fself, _ctx);
  kk_function_t _b_x24_27 = _self->_b_x24_27; /* (it__derived_show : main/item) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x24_27, _ctx);}, {}, _ctx)
  kk_main__item _x_x71 = kk_main__item_unbox(_b_x25, KK_OWNED, _ctx); /*main/item*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_main__item, kk_context_t*), _b_x24_27, (_b_x24_27, _x_x71, _ctx), _ctx);
}

kk_unit_t kk_main__main__main(kk_context_t* _ctx) { /* () -> <st<global>,console/console,div,fsys,ndet,net,ui> () */ 
  kk_main__document x;
  kk_box_t _x_x51;
  kk_box_t _x_x52;
  kk_main__document _x_x53 = kk_main__document_dup(kk_main_example_fs_document, _ctx); /*main/document*/
  _x_x52 = kk_main__document_box(_x_x53, _ctx); /*2599*/
  _x_x51 = kk_main_fixpoint(_x_x52, kk_main__main__new_main_fun54(_ctx), kk_main__main__new_main_fun57(_ctx), _ctx); /*2599*/
  x = kk_main__document_unbox(_x_x51, KK_OWNED, _ctx); /*main/document*/
  kk_string_t _x_x60;
  kk_string_t _x_x61;
  kk_define_string_literal(static, _s_x62, 9, "Document(", _ctx)
  _x_x61 = kk_string_dup(_s_x62, _ctx); /*string*/
  kk_string_t _x_x63;
  kk_std_core_types__list _b_x23_26;
  {
    kk_std_core_types__list _x = x.items;
    _b_x23_26 = _x; /*list<main/item>*/
  }
  kk_function_t _b_x24_27 = kk_main__main__new_main_fun65(_ctx); /*(it__derived_show : main/item) -> string*/;
  kk_string_t _x_x66;
  kk_define_string_literal(static, _s_x67, 6, "items=", _ctx)
  _x_x66 = kk_string_dup(_s_x67, _ctx); /*string*/
  kk_string_t _x_x68;
  kk_string_t _x_x69 = kk_std_core_list_show(_b_x23_26, kk_main__main__new_main_fun70(_b_x24_27, _ctx), _ctx); /*string*/
  kk_string_t _x_x72;
  kk_define_string_literal(static, _s_x73, 1, ")", _ctx)
  _x_x72 = kk_string_dup(_s_x73, _ctx); /*string*/
  _x_x68 = kk_std_core_types__lp__plus__plus__rp_(_x_x69, _x_x72, _ctx); /*string*/
  _x_x63 = kk_std_core_types__lp__plus__plus__rp_(_x_x66, _x_x68, _ctx); /*string*/
  _x_x60 = kk_std_core_types__lp__plus__plus__rp_(_x_x61, _x_x63, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x60, _ctx); return kk_Unit;
}

// initialization
void kk_main__main__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_maybe2__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_lazy__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_main__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_main__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_lazy__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe2__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}

// main library entry points
void main_init(kk_context_t* _ctx) {
  kk_main__main__init(_ctx);
}
void main_run(kk_context_t* _ctx) {
  kk_main__main__main(_ctx);
}
void main_done(kk_context_t* _ctx) {
  kk_main__main__done(_ctx);
}

static void main_at_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  main_done(_ctx);
}

// main program entry point
// `kk_main_start`/`kk_main_end` are only called for passing command line arguments and process timing
// (`kk_get_context()` can be used to get a context without calling `kk_main_start`)
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  main_init(_ctx); atexit(&main_at_exit);
  main_run(_ctx);
  main_done(_ctx); kk_main_end(_ctx);
  return 0;
}
