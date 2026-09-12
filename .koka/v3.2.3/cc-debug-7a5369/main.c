// Koka generated module: main, koka version: 3.2.3, platform: 64-bit
#include "main.h"

kk_main__document kk_main_document_fs__copy(kk_main__document _this, kk_std_core_types__optional items, kk_context_t* _ctx) { /* (document, items : ? (list<item>)) -> document */ 
  kk_std_core_types__list _x_x148;
  if (kk_std_core_types__is_Optional(items, _ctx)) {
    kk_box_t _box_x0 = items._cons._Optional.value;
    kk_std_core_types__list _uniq_items_127 = kk_std_core_types__list_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_items_127, _ctx);
    kk_std_core_types__optional_drop(items, _ctx);
    kk_main__document_drop(_this, _ctx);
    _x_x148 = _uniq_items_127; /*list<main/item>*/
  }
  else {
    kk_std_core_types__optional_drop(items, _ctx);
    {
      kk_std_core_types__list _x = _this.items;
      _x_x148 = _x; /*list<main/item>*/
    }
  }
  return kk_main__new_Document(_x_x148, _ctx);
}


// lift anonymous function
struct kk_main_item_fs_eq_fun157__t {
  struct kk_function_s _base;
};
static bool kk_main_item_fs_eq_fun157(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_main_item_fs_new_eq_fun157(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_item_fs_eq_fun157, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_item_fs_eq_fun157(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__annotation _x_x158 = kk_main__annotation_unbox(_b_x4, KK_OWNED, _ctx); /*main/annotation*/
  kk_main__annotation _x_x159 = kk_main__annotation_unbox(_b_x5, KK_OWNED, _ctx); /*main/annotation*/
  return kk_main_annotation_fs__lp__eq__eq__rp_(_x_x158, _x_x159, _ctx);
}

bool kk_main_item_fs_eq(kk_main__item it____derived__eq__1, kk_main__item it____derived__eq__2, kk_context_t* _ctx) { /* (it__derived_eq_1 : item, it__derived_eq_2 : item) -> bool */ 
  if (kk_main__is_Pair(it____derived__eq__1, _ctx) && kk_main__is_Pair(it____derived__eq__2, _ctx)) {
    struct kk_main_Pair* _con_x153 = kk_main__as_Pair(it____derived__eq__1, _ctx);
    struct kk_main_Pair* _con_x154 = kk_main__as_Pair(it____derived__eq__2, _ctx);
    kk_main__name it____derived__eq__11 = _con_x153->name;
    kk_main__value it____derived__eq__12 = _con_x153->value;
    kk_main__name it____derived__eq__21 = _con_x154->name;
    kk_main__value it____derived__eq__22 = _con_x154->value;
    kk_std_core_types__list it____derived__eq__13 = _con_x153->annotation;
    kk_string_t it____derived__eq__14 = _con_x153->inline_comment;
    kk_std_core_types__list it____derived__eq__23 = _con_x154->annotation;
    kk_string_t it____derived__eq__24 = _con_x154->inline_comment;
    if kk_likely(kk_datatype_ptr_is_unique(it____derived__eq__2, _ctx)) {
      kk_datatype_ptr_free(it____derived__eq__2, _ctx);
    }
    else {
      kk_main__name_dup(it____derived__eq__21, _ctx);
      kk_main__value_dup(it____derived__eq__22, _ctx);
      kk_std_core_types__list_dup(it____derived__eq__23, _ctx);
      kk_string_dup(it____derived__eq__24, _ctx);
      kk_datatype_ptr_decref(it____derived__eq__2, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(it____derived__eq__1, _ctx)) {
      kk_datatype_ptr_free(it____derived__eq__1, _ctx);
    }
    else {
      kk_main__name_dup(it____derived__eq__11, _ctx);
      kk_main__value_dup(it____derived__eq__12, _ctx);
      kk_std_core_types__list_dup(it____derived__eq__13, _ctx);
      kk_string_dup(it____derived__eq__14, _ctx);
      kk_datatype_ptr_decref(it____derived__eq__1, _ctx);
    }
    bool _match_x132;
    kk_string_t _x_x155;
    {
      kk_string_t _x = it____derived__eq__11.name;
      _x_x155 = _x; /*string*/
    }
    kk_string_t _x_x156;
    {
      kk_string_t _x_0 = it____derived__eq__21.name;
      _x_x156 = _x_0; /*string*/
    }
    _match_x132 = kk_string_is_eq(_x_x155,_x_x156,kk_context()); /*bool*/
    if (_match_x132) {
      kk_string_t va____derived__eq__11 = it____derived__eq__12.string;
      kk_string_t va____derived__eq__21 = it____derived__eq__22.string;
      bool _match_x133 = kk_string_is_eq(va____derived__eq__11,va____derived__eq__21,kk_context()); /*bool*/;
      if (_match_x133) {
        bool _match_x134 = kk_std_core_list__lp__eq__eq__rp_(it____derived__eq__13, it____derived__eq__23, kk_main_item_fs_new_eq_fun157(_ctx), _ctx); /*bool*/;
        if (_match_x134) {
          return kk_string_is_eq(it____derived__eq__14,it____derived__eq__24,kk_context());
        }
        {
          kk_string_drop(it____derived__eq__24, _ctx);
          kk_string_drop(it____derived__eq__14, _ctx);
          return false;
        }
      }
      {
        kk_string_drop(it____derived__eq__24, _ctx);
        kk_std_core_types__list_drop(it____derived__eq__23, _ctx);
        kk_string_drop(it____derived__eq__14, _ctx);
        kk_std_core_types__list_drop(it____derived__eq__13, _ctx);
        return false;
      }
    }
    {
      kk_string_drop(it____derived__eq__24, _ctx);
      kk_std_core_types__list_drop(it____derived__eq__23, _ctx);
      kk_main__value_drop(it____derived__eq__22, _ctx);
      kk_string_drop(it____derived__eq__14, _ctx);
      kk_std_core_types__list_drop(it____derived__eq__13, _ctx);
      kk_main__value_drop(it____derived__eq__12, _ctx);
      return false;
    }
  }
  if (kk_main__is_Line_comment(it____derived__eq__1, _ctx) && kk_main__is_Line_comment(it____derived__eq__2, _ctx)) {
    struct kk_main_Line_comment* _con_x160 = kk_main__as_Line_comment(it____derived__eq__1, _ctx);
    struct kk_main_Line_comment* _con_x161 = kk_main__as_Line_comment(it____derived__eq__2, _ctx);
    kk_string_t it____derived__eq__11_0 = _con_x160->content;
    kk_string_t it____derived__eq__21_0 = _con_x161->content;
    if kk_likely(kk_datatype_ptr_is_unique(it____derived__eq__2, _ctx)) {
      kk_datatype_ptr_free(it____derived__eq__2, _ctx);
    }
    else {
      kk_string_dup(it____derived__eq__21_0, _ctx);
      kk_datatype_ptr_decref(it____derived__eq__2, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(it____derived__eq__1, _ctx)) {
      kk_datatype_ptr_free(it____derived__eq__1, _ctx);
    }
    else {
      kk_string_dup(it____derived__eq__11_0, _ctx);
      kk_datatype_ptr_decref(it____derived__eq__1, _ctx);
    }
    return kk_string_is_eq(it____derived__eq__11_0,it____derived__eq__21_0,kk_context());
  }
  {
    kk_main__item_drop(it____derived__eq__2, _ctx);
    kk_main__item_drop(it____derived__eq__1, _ctx);
    return false;
  }
}
extern bool kk_main_document_fs_eq_fun164(kk_function_t _fself, kk_box_t _b_x12, kk_box_t _b_x13, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__item _x_x165 = kk_main__item_unbox(_b_x12, KK_OWNED, _ctx); /*main/item*/
  kk_main__item _x_x166 = kk_main__item_unbox(_b_x13, KK_OWNED, _ctx); /*main/item*/
  return kk_main_item_fs__lp__eq__eq__rp_(_x_x165, _x_x166, _ctx);
}
extern bool kk_main_document_fs__lp__at_x_fun169_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__item _x_x170 = kk_main__item_unbox(_b_x20, KK_OWNED, _ctx); /*main/item*/
  kk_main__item _x_x171 = kk_main__item_unbox(_b_x21, KK_OWNED, _ctx); /*main/item*/
  return kk_main_item_fs__lp__eq__eq__rp_(_x_x170, _x_x171, _ctx);
}


// lift anonymous function
struct kk_main_document_fs_to_env_fun173__t {
  struct kk_function_s _base;
};
static kk_std_core_types__list kk_main_document_fs_to_env_fun173(kk_function_t _fself, kk_box_t _b_x31, kk_context_t* _ctx);
static kk_function_t kk_main_document_fs_new_to_env_fun173(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_document_fs_to_env_fun173, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__list kk_main_document_fs_to_env_fun173(kk_function_t _fself, kk_box_t _b_x31, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__item _match_x131 = kk_main__item_unbox(_b_x31, KK_OWNED, _ctx); /*main/item*/;
  if (kk_main__is_Pair(_match_x131, _ctx)) {
    struct kk_main_Pair* _con_x174 = kk_main__as_Pair(_match_x131, _ctx);
    kk_main__name n = _con_x174->name;
    kk_main__value v = _con_x174->value;
    kk_std_core_types__list _pat_2 = _con_x174->annotation;
    kk_string_t _pat_3 = _con_x174->inline_comment;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x131, _ctx)) {
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_datatype_ptr_free(_match_x131, _ctx);
    }
    else {
      kk_main__name_dup(n, _ctx);
      kk_main__value_dup(v, _ctx);
      kk_datatype_ptr_decref(_match_x131, _ctx);
    }
    kk_box_t _x_x175;
    kk_std_core_types__tuple2 _x_x176 = kk_std_core_types__new_Tuple2(kk_main__name_box(n, _ctx), kk_main__value_box(v, _ctx), _ctx); /*(10037, 10038)*/
    _x_x175 = kk_std_core_types__tuple2_box(_x_x176, _ctx); /*10021*/
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x175, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_main_Line_comment* _con_x177 = kk_main__as_Line_comment(_match_x131, _ctx);
    kk_string_t _pat_5 = _con_x177->content;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x131, _ctx)) {
      kk_string_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(_match_x131, _ctx);
    }
    else {
      kk_datatype_ptr_decref(_match_x131, _ctx);
    }
    return kk_std_core_types__new_Nil(_ctx);
  }
}

kk_std_core_types__list kk_main_document_fs_to_env(kk_main__document d, kk_context_t* _ctx) { /* (d : document) -> list<(name, value)> */ 
  kk_std_core_types__list _x_x172;
  {
    kk_std_core_types__list _x = d.items;
    _x_x172 = _x; /*list<main/item>*/
  }
  return kk_std_core_list_flatmap(_x_x172, kk_main_document_fs_new_to_env_fun173(_ctx), _ctx);
}

kk_main__name kk_main_name_fs__copy(kk_main__name _this, kk_std_core_types__optional name, kk_context_t* _ctx) { /* (name, name : ? string) -> name */ 
  kk_string_t _x_x182;
  if (kk_std_core_types__is_Optional(name, _ctx)) {
    kk_box_t _box_x39 = name._cons._Optional.value;
    kk_string_t _uniq_name_1408 = kk_string_unbox(_box_x39);
    kk_string_dup(_uniq_name_1408, _ctx);
    kk_std_core_types__optional_drop(name, _ctx);
    kk_main__name_drop(_this, _ctx);
    _x_x182 = _uniq_name_1408; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(name, _ctx);
    {
      kk_string_t _x = _this.name;
      _x_x182 = _x; /*string*/
    }
  }
  return kk_main__new_Name(_x_x182, _ctx);
}

kk_main__value kk_main_value_fs__copy(kk_main__value _this, kk_std_core_types__optional string, kk_context_t* _ctx) { /* (value, string : ? string) -> value */ 
  kk_string_t _x_x188;
  if (kk_std_core_types__is_Optional(string, _ctx)) {
    kk_box_t _box_x40 = string._cons._Optional.value;
    kk_string_t _uniq_string_1450 = kk_string_unbox(_box_x40);
    kk_string_dup(_uniq_string_1450, _ctx);
    kk_std_core_types__optional_drop(string, _ctx);
    kk_main__value_drop(_this, _ctx);
    _x_x188 = _uniq_string_1450; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(string, _ctx);
    {
      kk_string_t _x = _this.string;
      _x_x188 = _x; /*string*/
    }
  }
  return kk_main__new_Str(_x_x188, _ctx);
}


// lift anonymous function
struct kk_main_item_fs_show_fun234__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_item_fs_show_fun234(kk_function_t _fself, kk_main__annotation _x1_x233, kk_context_t* _ctx);
static kk_function_t kk_main_item_fs_new_show_fun234(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_item_fs_show_fun234, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_main_item_fs_show_fun234(kk_function_t _fself, kk_main__annotation _x1_x233, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_main_annotation_fs_show(_x1_x233, _ctx);
}


// lift anonymous function
struct kk_main_item_fs_show_fun239__t {
  struct kk_function_s _base;
  kk_function_t _b_x42_45;
};
static kk_string_t kk_main_item_fs_show_fun239(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_main_item_fs_new_show_fun239(kk_function_t _b_x42_45, kk_context_t* _ctx) {
  struct kk_main_item_fs_show_fun239__t* _self = kk_function_alloc_as(struct kk_main_item_fs_show_fun239__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_item_fs_show_fun239, kk_context());
  _self->_b_x42_45 = _b_x42_45;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_main_item_fs_show_fun239(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_main_item_fs_show_fun239__t* _self = kk_function_as(struct kk_main_item_fs_show_fun239__t*, _fself, _ctx);
  kk_function_t _b_x42_45 = _self->_b_x42_45; /* (an__derived_show : main/annotation) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x42_45, _ctx);}, {}, _ctx)
  kk_main__annotation _x_x240 = kk_main__annotation_unbox(_b_x43, KK_OWNED, _ctx); /*main/annotation*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_main__annotation, kk_context_t*), _b_x42_45, (_b_x42_45, _x_x240, _ctx), _ctx);
}

kk_string_t kk_main_item_fs_show(kk_main__item it____derived__show, kk_context_t* _ctx) { /* (it__derived_show : item) -> string */ 
  if (kk_main__is_Pair(it____derived__show, _ctx)) {
    struct kk_main_Pair* _con_x206 = kk_main__as_Pair(it____derived__show, _ctx);
    kk_main__name name = _con_x206->name;
    kk_main__value value = _con_x206->value;
    kk_std_core_types__list annotation = _con_x206->annotation;
    kk_string_t inline_comment = _con_x206->inline_comment;
    if kk_likely(kk_datatype_ptr_is_unique(it____derived__show, _ctx)) {
      kk_datatype_ptr_free(it____derived__show, _ctx);
    }
    else {
      kk_std_core_types__list_dup(annotation, _ctx);
      kk_string_dup(inline_comment, _ctx);
      kk_main__name_dup(name, _ctx);
      kk_main__value_dup(value, _ctx);
      kk_datatype_ptr_decref(it____derived__show, _ctx);
    }
    kk_string_t _x_x207;
    kk_define_string_literal(static, _s_x208, 10, "Pair(name=", _ctx)
    _x_x207 = kk_string_dup(_s_x208, _ctx); /*string*/
    kk_string_t _x_x209;
    kk_string_t _x_x210;
    kk_string_t _x_x211;
    kk_define_string_literal(static, _s_x212, 5, "Name(", _ctx)
    _x_x211 = kk_string_dup(_s_x212, _ctx); /*string*/
    kk_string_t _x_x213;
    kk_string_t _x_x214;
    kk_define_string_literal(static, _s_x215, 5, "name=", _ctx)
    _x_x214 = kk_string_dup(_s_x215, _ctx); /*string*/
    kk_string_t _x_x216;
    kk_string_t _x_x217;
    kk_string_t _x_x218;
    {
      kk_string_t _x = name.name;
      _x_x218 = _x; /*string*/
    }
    _x_x217 = kk_std_core_show_string_fs_show(_x_x218, _ctx); /*string*/
    kk_string_t _x_x219;
    kk_define_string_literal(static, _s_x220, 1, ")", _ctx)
    _x_x219 = kk_string_dup(_s_x220, _ctx); /*string*/
    _x_x216 = kk_std_core_types__lp__plus__plus__rp_(_x_x217, _x_x219, _ctx); /*string*/
    _x_x213 = kk_std_core_types__lp__plus__plus__rp_(_x_x214, _x_x216, _ctx); /*string*/
    _x_x210 = kk_std_core_types__lp__plus__plus__rp_(_x_x211, _x_x213, _ctx); /*string*/
    kk_string_t _x_x221;
    kk_string_t _x_x222;
    kk_define_string_literal(static, _s_x223, 8, ", value=", _ctx)
    _x_x222 = kk_string_dup(_s_x223, _ctx); /*string*/
    kk_string_t _x_x224;
    kk_string_t _x_x225;
    {
      kk_string_t string = value.string;
      kk_string_t _x_x226;
      kk_define_string_literal(static, _s_x227, 11, "Str(string=", _ctx)
      _x_x226 = kk_string_dup(_s_x227, _ctx); /*string*/
      kk_string_t _x_x228;
      kk_string_t _x_x229 = kk_std_core_show_string_fs_show(string, _ctx); /*string*/
      kk_string_t _x_x230;
      kk_define_string_literal(static, _s_x231, 1, ")", _ctx)
      _x_x230 = kk_string_dup(_s_x231, _ctx); /*string*/
      _x_x228 = kk_std_core_types__lp__plus__plus__rp_(_x_x229, _x_x230, _ctx); /*string*/
      _x_x225 = kk_std_core_types__lp__plus__plus__rp_(_x_x226, _x_x228, _ctx); /*string*/
    }
    kk_string_t _x_x232;
    kk_std_core_types__list _b_x41_44 = annotation; /*list<main/annotation>*/;
    kk_function_t _b_x42_45 = kk_main_item_fs_new_show_fun234(_ctx); /*(an__derived_show : main/annotation) -> string*/;
    kk_string_t _x_x235;
    kk_define_string_literal(static, _s_x236, 13, ", annotation=", _ctx)
    _x_x235 = kk_string_dup(_s_x236, _ctx); /*string*/
    kk_string_t _x_x237;
    kk_string_t _x_x238 = kk_std_core_list_show(_b_x41_44, kk_main_item_fs_new_show_fun239(_b_x42_45, _ctx), _ctx); /*string*/
    kk_string_t _x_x241;
    kk_string_t _x_x242;
    kk_define_string_literal(static, _s_x243, 17, ", inline-comment=", _ctx)
    _x_x242 = kk_string_dup(_s_x243, _ctx); /*string*/
    kk_string_t _x_x244;
    kk_string_t _x_x245 = kk_std_core_show_string_fs_show(inline_comment, _ctx); /*string*/
    kk_string_t _x_x246;
    kk_define_string_literal(static, _s_x247, 1, ")", _ctx)
    _x_x246 = kk_string_dup(_s_x247, _ctx); /*string*/
    _x_x244 = kk_std_core_types__lp__plus__plus__rp_(_x_x245, _x_x246, _ctx); /*string*/
    _x_x241 = kk_std_core_types__lp__plus__plus__rp_(_x_x242, _x_x244, _ctx); /*string*/
    _x_x237 = kk_std_core_types__lp__plus__plus__rp_(_x_x238, _x_x241, _ctx); /*string*/
    _x_x232 = kk_std_core_types__lp__plus__plus__rp_(_x_x235, _x_x237, _ctx); /*string*/
    _x_x224 = kk_std_core_types__lp__plus__plus__rp_(_x_x225, _x_x232, _ctx); /*string*/
    _x_x221 = kk_std_core_types__lp__plus__plus__rp_(_x_x222, _x_x224, _ctx); /*string*/
    _x_x209 = kk_std_core_types__lp__plus__plus__rp_(_x_x210, _x_x221, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x207, _x_x209, _ctx);
  }
  {
    struct kk_main_Line_comment* _con_x248 = kk_main__as_Line_comment(it____derived__show, _ctx);
    kk_string_t content = _con_x248->content;
    if kk_likely(kk_datatype_ptr_is_unique(it____derived__show, _ctx)) {
      kk_datatype_ptr_free(it____derived__show, _ctx);
    }
    else {
      kk_string_dup(content, _ctx);
      kk_datatype_ptr_decref(it____derived__show, _ctx);
    }
    kk_string_t _x_x249;
    kk_define_string_literal(static, _s_x250, 21, "Line-comment(content=", _ctx)
    _x_x249 = kk_string_dup(_s_x250, _ctx); /*string*/
    kk_string_t _x_x251;
    kk_string_t _x_x252 = kk_std_core_show_string_fs_show(content, _ctx); /*string*/
    kk_string_t _x_x253;
    kk_define_string_literal(static, _s_x254, 1, ")", _ctx)
    _x_x253 = kk_string_dup(_s_x254, _ctx); /*string*/
    _x_x251 = kk_std_core_types__lp__plus__plus__rp_(_x_x252, _x_x253, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x249, _x_x251, _ctx);
  }
}


// lift anonymous function
struct kk_main_document_fs_show_fun259__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_document_fs_show_fun259(kk_function_t _fself, kk_main__item _x1_x258, kk_context_t* _ctx);
static kk_function_t kk_main_document_fs_new_show_fun259(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_document_fs_show_fun259, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_main_document_fs_show_fun259(kk_function_t _fself, kk_main__item _x1_x258, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_main_item_fs_show(_x1_x258, _ctx);
}


// lift anonymous function
struct kk_main_document_fs_show_fun264__t {
  struct kk_function_s _base;
  kk_function_t _b_x47_50;
};
static kk_string_t kk_main_document_fs_show_fun264(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx);
static kk_function_t kk_main_document_fs_new_show_fun264(kk_function_t _b_x47_50, kk_context_t* _ctx) {
  struct kk_main_document_fs_show_fun264__t* _self = kk_function_alloc_as(struct kk_main_document_fs_show_fun264__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_document_fs_show_fun264, kk_context());
  _self->_b_x47_50 = _b_x47_50;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_main_document_fs_show_fun264(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx) {
  struct kk_main_document_fs_show_fun264__t* _self = kk_function_as(struct kk_main_document_fs_show_fun264__t*, _fself, _ctx);
  kk_function_t _b_x47_50 = _self->_b_x47_50; /* (it__derived_show : main/item) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x47_50, _ctx);}, {}, _ctx)
  kk_main__item _x_x265 = kk_main__item_unbox(_b_x48, KK_OWNED, _ctx); /*main/item*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_main__item, kk_context_t*), _b_x47_50, (_b_x47_50, _x_x265, _ctx), _ctx);
}

kk_string_t kk_main_document_fs_show(kk_main__document do____derived__show, kk_context_t* _ctx) { /* (do__derived_show : document) -> string */ 
  kk_string_t _x_x255;
  kk_define_string_literal(static, _s_x256, 9, "Document(", _ctx)
  _x_x255 = kk_string_dup(_s_x256, _ctx); /*string*/
  kk_string_t _x_x257;
  kk_std_core_types__list _b_x46_49;
  {
    kk_std_core_types__list _x = do____derived__show.items;
    _b_x46_49 = _x; /*list<main/item>*/
  }
  kk_function_t _b_x47_50 = kk_main_document_fs_new_show_fun259(_ctx); /*(it__derived_show : main/item) -> string*/;
  kk_string_t _x_x260;
  kk_define_string_literal(static, _s_x261, 6, "items=", _ctx)
  _x_x260 = kk_string_dup(_s_x261, _ctx); /*string*/
  kk_string_t _x_x262;
  kk_string_t _x_x263 = kk_std_core_list_show(_b_x46_49, kk_main_document_fs_new_show_fun264(_b_x47_50, _ctx), _ctx); /*string*/
  kk_string_t _x_x266;
  kk_define_string_literal(static, _s_x267, 1, ")", _ctx)
  _x_x266 = kk_string_dup(_s_x267, _ctx); /*string*/
  _x_x262 = kk_std_core_types__lp__plus__plus__rp_(_x_x263, _x_x266, _ctx); /*string*/
  _x_x257 = kk_std_core_types__lp__plus__plus__rp_(_x_x260, _x_x262, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x255, _x_x257, _ctx);
}


// lift anonymous function
struct kk_main_eval_fun274__t {
  struct kk_function_s _base;
};
static kk_std_core_types__list kk_main_eval_fun274(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_main_new_eval_fun274(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_eval_fun274, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__list kk_main_eval_fun274(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__item _match_x129 = kk_main__item_unbox(_b_x57, KK_OWNED, _ctx); /*main/item*/;
  if (kk_main__is_Pair(_match_x129, _ctx)) {
    struct kk_main_Pair* _con_x275 = kk_main__as_Pair(_match_x129, _ctx);
    kk_main__name n = _con_x275->name;
    kk_main__value v = _con_x275->value;
    kk_std_core_types__list _pat_2 = _con_x275->annotation;
    kk_string_t _pat_3 = _con_x275->inline_comment;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x129, _ctx)) {
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_datatype_ptr_free(_match_x129, _ctx);
    }
    else {
      kk_main__name_dup(n, _ctx);
      kk_main__value_dup(v, _ctx);
      kk_datatype_ptr_decref(_match_x129, _ctx);
    }
    kk_box_t _x_x276;
    kk_std_core_types__tuple2 _x_x277 = kk_std_core_types__new_Tuple2(kk_main__name_box(n, _ctx), kk_main__value_box(v, _ctx), _ctx); /*(10037, 10038)*/
    _x_x276 = kk_std_core_types__tuple2_box(_x_x277, _ctx); /*10021*/
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x276, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_main_Line_comment* _con_x278 = kk_main__as_Line_comment(_match_x129, _ctx);
    kk_string_t _pat_5 = _con_x278->content;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x129, _ctx)) {
      kk_string_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(_match_x129, _ctx);
    }
    else {
      kk_datatype_ptr_decref(_match_x129, _ctx);
    }
    return kk_std_core_types__new_Nil(_ctx);
  }
}


// lift anonymous function
struct kk_main_eval_fun282__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_main_eval_fun282(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_main_new_eval_fun282(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_eval_fun282__t* _self = kk_function_alloc_as(struct kk_main_eval_fun282__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_eval_fun282, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_eval_fun282(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  struct kk_main_eval_fun282__t* _self = kk_function_as(struct kk_main_eval_fun282__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<2404,string> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x127 = kk_std_core_types__tuple2_unbox(_b_x75, KK_OWNED, _ctx); /*(main/name, main/value)*/;
  {
    kk_box_t _box_x67 = _match_x127.fst;
    kk_box_t _box_x68 = _match_x127.snd;
    kk_main__name n_0 = kk_main__name_unbox(_box_x67, KK_BORROWED, _ctx);
    kk_main__value v_0 = kk_main__value_unbox(_box_x68, KK_BORROWED, _ctx);
    kk_main__name_dup(n_0, _ctx);
    kk_main__value_dup(v_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x127, _ctx);
    kk_string_t _b_x72_79;
    kk_string_t _x_x283;
    kk_box_t _x_x284;
    kk_ref_t _x_x285 = kk_ref_dup(loc, _ctx); /*local-var<2404,string>*/
    _x_x284 = kk_ref_get(_x_x285,kk_context()); /*10000*/
    _x_x283 = kk_string_unbox(_x_x284); /*string*/
    kk_string_t _x_x286;
    kk_string_t _x_x287;
    kk_define_string_literal(static, _s_x288, 2, "${", _ctx)
    _x_x287 = kk_string_dup(_s_x288, _ctx); /*string*/
    kk_string_t _x_x289;
    kk_string_t _x_x290;
    {
      kk_string_t _x_0_0 = n_0.name;
      _x_x290 = _x_0_0; /*string*/
    }
    kk_string_t _x_x291;
    kk_define_string_literal(static, _s_x292, 1, "}", _ctx)
    _x_x291 = kk_string_dup(_s_x292, _ctx); /*string*/
    _x_x289 = kk_std_core_types__lp__plus__plus__rp_(_x_x290, _x_x291, _ctx); /*string*/
    _x_x286 = kk_std_core_types__lp__plus__plus__rp_(_x_x287, _x_x289, _ctx); /*string*/
    kk_string_t _x_x293;
    {
      kk_string_t _x_1 = v_0.string;
      _x_x293 = _x_1; /*string*/
    }
    _b_x72_79 = kk_string_replace_all(_x_x283,_x_x286,_x_x293,kk_context()); /*string*/
    kk_unit_t _brw_x128 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_string_box(_b_x72_79)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x128; return kk_Unit;
  }
}

kk_main__value kk_main_eval(kk_main__document doc, kk_main__value value, kk_context_t* _ctx) { /* (doc : document, value : value) -> value */ 
  kk_std_core_types__list env;
  kk_std_core_types__list _x_x273;
  {
    kk_std_core_types__list _x = doc.items;
    _x_x273 = _x; /*list<main/item>*/
  }
  env = kk_std_core_list_flatmap(_x_x273, kk_main_new_eval_fun274(_ctx), _ctx); /*list<(main/name, main/value)>*/
  kk_ref_t loc;
  kk_box_t _x_x279;
  kk_string_t _x_x280;
  {
    kk_string_t _x_0 = value.string;
    _x_x280 = _x_0; /*string*/
  }
  _x_x279 = kk_string_box(_x_x280); /*10000*/
  loc = kk_ref_alloc(_x_x279,kk_context()); /*local-var<2404,string>*/
  kk_unit_t __ = kk_Unit;
  kk_function_t _x_x281;
  kk_ref_dup(loc, _ctx);
  _x_x281 = kk_main_new_eval_fun282(loc, _ctx); /*(10001) -> 10002 ()*/
  kk_std_core_list_foreach(env, _x_x281, _ctx);
  kk_main__value res;
  kk_string_t _x_x294;
  kk_box_t _x_x295;
  kk_ref_t _x_x296 = kk_ref_dup(loc, _ctx); /*local-var<2404,string>*/
  _x_x295 = kk_ref_get(_x_x296,kk_context()); /*10000*/
  _x_x294 = kk_string_unbox(_x_x295); /*string*/
  res = kk_main__new_Str(_x_x294, _ctx); /*main/value*/
  kk_box_t _x_x297 = kk_std_core_hnd_prompt_local_var(loc, kk_main__value_box(res, _ctx), _ctx); /*10001*/
  return kk_main__value_unbox(_x_x297, KK_OWNED, _ctx);
}
 
// monadic lift

kk_box_t kk_main__mlift_fixpoint_10055(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_box_t current, kk_function_t f, kk_box_t next, kk_context_t* _ctx) { /* forall<a,e> (?(==) : (a, a) -> bool, current : a, f : (a) -> <div|e> a, next : a) -> <div|e> a */ 
  bool _match_x126;
  kk_function_t _x_x299 = kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx); /*(2599, 2599) -> bool*/
  kk_box_t _x_x298 = kk_box_dup(next, _ctx); /*2599*/
  _match_x126 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x299, (_x_x299, _x_x298, current, _ctx), _ctx); /*bool*/
  if (_match_x126) {
    kk_function_drop(f, _ctx);
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    return next;
  }
  {
    return kk_main_fixpoint(next, f, _implicit_fs__lp__eq__eq__rp_, _ctx);
  }
}


// lift anonymous function
struct kk_main_fixpoint_fun302__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_;
  kk_box_t current_0;
  kk_function_t f_0;
};
static kk_box_t kk_main_fixpoint_fun302(kk_function_t _fself, kk_box_t next_1, kk_context_t* _ctx);
static kk_function_t kk_main_new_fixpoint_fun302(kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_box_t current_0, kk_function_t f_0, kk_context_t* _ctx) {
  struct kk_main_fixpoint_fun302__t* _self = kk_function_alloc_as(struct kk_main_fixpoint_fun302__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_fixpoint_fun302, kk_context());
  _self->_implicit_fs__lp__at_x_0_eq__eq__rp_ = _implicit_fs__lp__at_x_0_eq__eq__rp_;
  _self->current_0 = current_0;
  _self->f_0 = f_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_fixpoint_fun302(kk_function_t _fself, kk_box_t next_1, kk_context_t* _ctx) {
  struct kk_main_fixpoint_fun302__t* _self = kk_function_as(struct kk_main_fixpoint_fun302__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_ = _self->_implicit_fs__lp__at_x_0_eq__eq__rp_; /* (2599, 2599) -> bool */
  kk_box_t current_0 = _self->current_0; /* 2599 */
  kk_function_t f_0 = _self->f_0; /* (2599) -> <div|2600> 2599 */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);kk_box_dup(current_0, _ctx);kk_function_dup(f_0, _ctx);}, {}, _ctx)
  return kk_main__mlift_fixpoint_10055(_implicit_fs__lp__at_x_0_eq__eq__rp_, current_0, f_0, next_1, _ctx);
}

kk_box_t kk_main_fixpoint(kk_box_t current_0, kk_function_t f_0, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (current : a, f : (a) -> <div|e> a, ?(==) : (a, a) -> bool) -> <div|e> a */ 
  kk__tailcall: ;
  kk_box_t x_10058;
  kk_function_t _x_x301 = kk_function_dup(f_0, _ctx); /*(2599) -> <div|2600> 2599*/
  kk_box_t _x_x300 = kk_box_dup(current_0, _ctx); /*2599*/
  x_10058 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x301, (_x_x301, _x_x300, _ctx), _ctx); /*2599*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10058, _ctx);
    return kk_std_core_hnd_yield_extend(kk_main_new_fixpoint_fun302(_implicit_fs__lp__at_x_0_eq__eq__rp_, current_0, f_0, _ctx), _ctx);
  }
  {
    bool _match_x125;
    kk_function_t _x_x304 = kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx); /*(2599, 2599) -> bool*/
    kk_box_t _x_x303 = kk_box_dup(x_10058, _ctx); /*2599*/
    _match_x125 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x304, (_x_x304, _x_x303, current_0, _ctx), _ctx); /*bool*/
    if (_match_x125) {
      kk_function_drop(f_0, _ctx);
      kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
      return x_10058;
    }
    { // tailcall
      current_0 = x_10058;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_document_fs_interp_fun305__t {
  struct kk_function_s _base;
  kk_main__document doc;
};
static kk_box_t kk_main_document_fs_interp_fun305(kk_function_t _fself, kk_box_t _b_x93, kk_context_t* _ctx);
static kk_function_t kk_main_document_fs_new_interp_fun305(kk_main__document doc, kk_context_t* _ctx) {
  struct kk_main_document_fs_interp_fun305__t* _self = kk_function_alloc_as(struct kk_main_document_fs_interp_fun305__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_document_fs_interp_fun305, kk_context());
  _self->doc = doc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_document_fs_interp_fun305(kk_function_t _fself, kk_box_t _b_x93, kk_context_t* _ctx) {
  struct kk_main_document_fs_interp_fun305__t* _self = kk_function_as(struct kk_main_document_fs_interp_fun305__t*, _fself, _ctx);
  kk_main__document doc = _self->doc; /* main/document */
  kk_drop_match(_self, {kk_main__document_dup(doc, _ctx);}, {}, _ctx)
  kk_main__item _x_x306;
  kk_main__item _match_x121 = kk_main__item_unbox(_b_x93, KK_OWNED, _ctx); /*main/item*/;
  if (kk_main__is_Pair(_match_x121, _ctx)) {
    struct kk_main_Pair* _con_x307 = kk_main__as_Pair(_match_x121, _ctx);
    kk_main__name n = _con_x307->name;
    kk_main__value v = _con_x307->value;
    kk_std_core_types__list a = _con_x307->annotation;
    kk_string_t c = _con_x307->inline_comment;
    kk_reuse_t _ru_x145 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x121, _ctx)) {
      _ru_x145 = (kk_datatype_ptr_reuse(_match_x121, _ctx));
    }
    else {
      kk_std_core_types__list_dup(a, _ctx);
      kk_string_dup(c, _ctx);
      kk_main__name_dup(n, _ctx);
      kk_main__value_dup(v, _ctx);
      kk_datatype_ptr_decref(_match_x121, _ctx);
    }
    kk_main__value _ru_x147 = kk_main_eval(doc, v, _ctx); /*main/value*/;
    if kk_likely(_ru_x145!=NULL) {
      struct kk_main_Pair* _con_x308 = (struct kk_main_Pair*)_ru_x145;
      _con_x308->value = _ru_x147;
      _x_x306 = kk_main__base_Pair(_con_x308, _ctx); /*main/item*/
    }
    else {
      _x_x306 = kk_main__new_Pair(kk_reuse_null, 0, n, _ru_x147, a, c, _ctx); /*main/item*/
    }
  }
  else {
    struct kk_main_Line_comment* _con_x309 = kk_main__as_Line_comment(_match_x121, _ctx);
    kk_string_t c_0 = _con_x309->content;
    kk_main__document_drop(doc, _ctx);
    kk_reuse_t _ru_x146 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x121, _ctx)) {
      _ru_x146 = (kk_datatype_ptr_reuse(_match_x121, _ctx));
    }
    else {
      kk_string_dup(c_0, _ctx);
      kk_datatype_ptr_decref(_match_x121, _ctx);
    }
    if kk_likely(_ru_x146!=NULL) {
      struct kk_main_Line_comment* _con_x310 = (struct kk_main_Line_comment*)_ru_x146;
      _x_x306 = kk_main__base_Line_comment(_con_x310, _ctx); /*main/item*/
    }
    else {
      _x_x306 = kk_main__new_Line_comment(kk_reuse_null, 0, c_0, _ctx); /*main/item*/
    }
  }
  return kk_main__item_box(_x_x306, _ctx);
}

kk_main__document kk_main_document_fs_interp(kk_main__document doc, kk_context_t* _ctx) { /* (doc : document) -> document */ 
  kk_std_core_types__list res;
  kk_function_t _brw_x122 = kk_main_document_fs_new_interp_fun305(doc, _ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x123;
  kk_std_core_types__list _x_x311;
  {
    kk_std_core_types__list _x = doc.items;
    kk_std_core_types__list_dup(_x, _ctx);
    _x_x311 = _x; /*list<main/item>*/
  }
  _brw_x123 = kk_std_core_list_map(_x_x311, _brw_x122, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x122, _ctx);
  res = _brw_x123; /*list<main/item>*/
  return kk_main__new_Document(res, _ctx);
}

kk_main__document kk_main_example_fs_document;


// lift anonymous function
struct kk_main_main_fun357__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun357(kk_function_t _fself, kk_box_t _b_x112, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun357(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun357, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun357(kk_function_t _fself, kk_box_t _b_x112, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__document _x_x358;
  kk_main__document _x_x359 = kk_main__document_unbox(_b_x112, KK_OWNED, _ctx); /*main/document*/
  _x_x358 = kk_main_document_fs_interp(_x_x359, _ctx); /*main/document*/
  return kk_main__document_box(_x_x358, _ctx);
}


// lift anonymous function
struct kk_main_main_fun360__t {
  struct kk_function_s _base;
};
static bool kk_main_main_fun360(kk_function_t _fself, kk_box_t _b_x113, kk_box_t _b_x114, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun360(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun360, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_main_fun360(kk_function_t _fself, kk_box_t _b_x113, kk_box_t _b_x114, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_main__document _x_x361 = kk_main__document_unbox(_b_x113, KK_OWNED, _ctx); /*main/document*/
  kk_main__document _x_x362 = kk_main__document_unbox(_b_x114, KK_OWNED, _ctx); /*main/document*/
  return kk_main_document_fs__lp__eq__eq__rp_(_x_x361, _x_x362, _ctx);
}

kk_main__document kk_main_main(kk_context_t* _ctx) { /* () -> div document */ 
  kk_box_t _x_x354;
  kk_box_t _x_x355;
  kk_main__document _x_x356 = kk_main__document_dup(kk_main_example_fs_document, _ctx); /*main/document*/
  _x_x355 = kk_main__document_box(_x_x356, _ctx); /*2599*/
  _x_x354 = kk_main_fixpoint(_x_x355, kk_main_new_main_fun357(_ctx), kk_main_new_main_fun360(_ctx), _ctx); /*2599*/
  return kk_main__document_unbox(_x_x354, KK_OWNED, _ctx);
}

// initialization
void kk_main__init(kk_context_t* _ctx){
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
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_main__item _b_x101_103;
    kk_main__name _x_x312;
    kk_string_t _x_x313;
    bool _match_x120;
    kk_string_t _x_x314;
    kk_define_string_literal(static, _s_x315, 4, "USER", _ctx)
    _x_x314 = kk_string_dup(_s_x315, _ctx); /*string*/
    kk_string_t _x_x316 = kk_string_empty(); /*string*/
    _match_x120 = kk_string_is_eq(_x_x314,_x_x316,kk_context()); /*bool*/
    if (_match_x120) {
      kk_define_string_literal(static, _s_x318, 3, "xxx", _ctx)
      _x_x313 = kk_string_dup(_s_x318, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x319, 4, "USER", _ctx)
      _x_x313 = kk_string_dup(_s_x319, _ctx); /*string*/
    }
    _x_x312 = kk_main__new_Name(_x_x313, _ctx); /*main/name*/
    kk_main__value _x_x320;
    kk_string_t _x_x321;
    kk_define_string_literal(static, _s_x322, 5, "admin", _ctx)
    _x_x321 = kk_string_dup(_s_x322, _ctx); /*string*/
    _x_x320 = kk_main__new_Str(_x_x321, _ctx); /*main/value*/
    kk_string_t _x_x323 = kk_string_empty(); /*string*/
    _b_x101_103 = kk_main__new_Pair(kk_reuse_null, 0, _x_x312, _x_x320, kk_std_core_types__new_Nil(_ctx), _x_x323, _ctx); /*main/item*/
    kk_main__item _b_x99_105;
    kk_main__name _x_x325;
    kk_string_t _x_x326;
    bool _match_x119;
    kk_string_t _x_x327;
    kk_define_string_literal(static, _s_x328, 5, "EMAIL", _ctx)
    _x_x327 = kk_string_dup(_s_x328, _ctx); /*string*/
    kk_string_t _x_x329 = kk_string_empty(); /*string*/
    _match_x119 = kk_string_is_eq(_x_x327,_x_x329,kk_context()); /*bool*/
    if (_match_x119) {
      kk_define_string_literal(static, _s_x331, 3, "xxx", _ctx)
      _x_x326 = kk_string_dup(_s_x331, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x332, 5, "EMAIL", _ctx)
      _x_x326 = kk_string_dup(_s_x332, _ctx); /*string*/
    }
    _x_x325 = kk_main__new_Name(_x_x326, _ctx); /*main/name*/
    kk_main__value _x_x333;
    kk_string_t _x_x334;
    kk_define_string_literal(static, _s_x335, 17, "${USER}@email.com", _ctx)
    _x_x334 = kk_string_dup(_s_x335, _ctx); /*string*/
    _x_x333 = kk_main__new_Str(_x_x334, _ctx); /*main/value*/
    kk_string_t _x_x336 = kk_string_empty(); /*string*/
    _b_x99_105 = kk_main__new_Pair(kk_reuse_null, 0, _x_x325, _x_x333, kk_std_core_types__new_Nil(_ctx), _x_x336, _ctx); /*main/item*/
    kk_main__item _b_x97_107;
    kk_main__name _x_x338;
    kk_string_t _x_x339;
    bool _match_x118;
    kk_string_t _x_x340;
    kk_define_string_literal(static, _s_x341, 7, "CONTACT", _ctx)
    _x_x340 = kk_string_dup(_s_x341, _ctx); /*string*/
    kk_string_t _x_x342 = kk_string_empty(); /*string*/
    _match_x118 = kk_string_is_eq(_x_x340,_x_x342,kk_context()); /*bool*/
    if (_match_x118) {
      kk_define_string_literal(static, _s_x344, 3, "xxx", _ctx)
      _x_x339 = kk_string_dup(_s_x344, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x345, 7, "CONTACT", _ctx)
      _x_x339 = kk_string_dup(_s_x345, _ctx); /*string*/
    }
    _x_x338 = kk_main__new_Name(_x_x339, _ctx); /*main/name*/
    kk_main__value _x_x346;
    kk_string_t _x_x347;
    kk_define_string_literal(static, _s_x348, 31, "User : ${USER}\nEMAIL : ${EMAIL}", _ctx)
    _x_x347 = kk_string_dup(_s_x348, _ctx); /*string*/
    _x_x346 = kk_main__new_Str(_x_x347, _ctx); /*main/value*/
    kk_string_t _x_x349 = kk_string_empty(); /*string*/
    _b_x97_107 = kk_main__new_Pair(kk_reuse_null, 0, _x_x338, _x_x346, kk_std_core_types__new_Nil(_ctx), _x_x349, _ctx); /*main/item*/
    kk_std_core_types__list _x_x351;
    kk_std_core_types__list _x_x352;
    kk_std_core_types__list _x_x353 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_main__item_box(_b_x97_107, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x352 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_main__item_box(_b_x99_105, _ctx), _x_x353, _ctx); /*list<10021>*/
    _x_x351 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_main__item_box(_b_x101_103, _ctx), _x_x352, _ctx); /*list<10021>*/
    kk_main_example_fs_document = kk_main__new_Document(_x_x351, _ctx); /*main/document*/
  }
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_main__document_drop(kk_main_example_fs_document, _ctx);
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
