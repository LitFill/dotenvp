#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: main, koka version: 3.2.3, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_maybe2.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_lazy.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"

// type declarations

// value type main/annotation
enum kk_main__annotation_e {
  kk_main_Export
};
typedef uint8_t kk_main__annotation;

static inline kk_main__annotation kk_main__new_Export(kk_context_t* _ctx) {
  return kk_main_Export;
}
static inline bool kk_main__is_Export(kk_main__annotation x, kk_context_t* _ctx) {
  return (x == kk_main_Export);
}
static inline kk_main__annotation kk_main__annotation_dup(kk_main__annotation _x, kk_context_t* _ctx) {
  return _x;
}
static inline void kk_main__annotation_drop(kk_main__annotation _x, kk_context_t* _ctx) {
  
}
static inline kk_box_t kk_main__annotation_box(kk_main__annotation _x, kk_context_t* _ctx) {
  return kk_enum_box(_x);
}
static inline kk_main__annotation kk_main__annotation_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return (kk_main__annotation)kk_enum_unbox(_x);
}

// value type main/name
struct kk_main_Name {
  kk_string_t name;
};
typedef struct kk_main_Name kk_main__name;
static inline kk_main__name kk_main__new_Name(kk_string_t name, kk_context_t* _ctx) {
  kk_main__name _con = { name };
  return _con;
}
static inline bool kk_main__is_Name(kk_main__name x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__name kk_main__name_dup(kk_main__name _x, kk_context_t* _ctx) {
  kk_string_dup(_x.name, _ctx);
  return _x;
}
static inline void kk_main__name_drop(kk_main__name _x, kk_context_t* _ctx) {
  kk_string_drop(_x.name, _ctx);
}
static inline kk_box_t kk_main__name_box(kk_main__name _x, kk_context_t* _ctx) {
  return kk_string_box(_x.name);
}
static inline kk_main__name kk_main__name_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_main__new_Name(kk_string_unbox(_x), _ctx);
}

// value type main/value
struct kk_main_Str {
  kk_string_t string;
};
typedef struct kk_main_Str kk_main__value;
static inline kk_main__value kk_main__new_Str(kk_string_t string, kk_context_t* _ctx) {
  kk_main__value _con = { string };
  return _con;
}
static inline bool kk_main__is_Str(kk_main__value x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__value kk_main__value_dup(kk_main__value _x, kk_context_t* _ctx) {
  kk_string_dup(_x.string, _ctx);
  return _x;
}
static inline void kk_main__value_drop(kk_main__value _x, kk_context_t* _ctx) {
  kk_string_drop(_x.string, _ctx);
}
static inline kk_box_t kk_main__value_box(kk_main__value _x, kk_context_t* _ctx) {
  return kk_string_box(_x.string);
}
static inline kk_main__value kk_main__value_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_main__new_Str(kk_string_unbox(_x), _ctx);
}

// type main/item
struct kk_main__item_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__item;
struct kk_main_Pair {
  struct kk_main__item_s _base;
  kk_main__name name;
  kk_main__value value;
  kk_std_core_types__list annotation;
  kk_string_t inline_comment;
};
struct kk_main_Line_comment {
  struct kk_main__item_s _base;
  kk_string_t content;
};
static inline kk_main__item kk_main__base_Line_comment(struct kk_main_Line_comment* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__item kk_main__new_Line_comment(kk_reuse_t _at, int32_t _cpath, kk_string_t content, kk_context_t* _ctx) {
  struct kk_main_Line_comment* _con = kk_block_alloc_at_as(struct kk_main_Line_comment, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->content = content;
  return kk_main__base_Line_comment(_con, _ctx);
}
static inline struct kk_main_Line_comment* kk_main__as_Line_comment(kk_main__item x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_Line_comment*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__item kk_main__base_Pair(struct kk_main_Pair* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__item kk_main__new_Pair(kk_reuse_t _at, int32_t _cpath, kk_main__name name, kk_main__value value, kk_std_core_types__list annotation, kk_string_t inline_comment, kk_context_t* _ctx) {
  struct kk_main_Pair* _con = kk_block_alloc_at_as(struct kk_main_Pair, _at, 4 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->name = name;
  _con->value = value;
  _con->annotation = annotation;
  _con->inline_comment = inline_comment;
  return kk_main__base_Pair(_con, _ctx);
}
static inline struct kk_main_Pair* kk_main__as_Pair(kk_main__item x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_Pair*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_main__is_Line_comment(kk_main__item x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_Pair(kk_main__item x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline kk_main__item kk_main__item_dup(kk_main__item _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__item_drop(kk_main__item _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__item_box(kk_main__item _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__item kk_main__item_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value type main/document
struct kk_main_Document {
  kk_std_core_types__list items;
};
typedef struct kk_main_Document kk_main__document;
static inline kk_main__document kk_main__new_Document(kk_std_core_types__list items, kk_context_t* _ctx) {
  kk_main__document _con = { items };
  return _con;
}
static inline bool kk_main__is_Document(kk_main__document x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__document kk_main__document_dup(kk_main__document _x, kk_context_t* _ctx) {
  kk_std_core_types__list_dup(_x.items, _ctx);
  return _x;
}
static inline void kk_main__document_drop(kk_main__document _x, kk_context_t* _ctx) {
  kk_std_core_types__list_drop(_x.items, _ctx);
}
static inline kk_box_t kk_main__document_box(kk_main__document _x, kk_context_t* _ctx) {
  return kk_std_core_types__list_box(_x.items, _ctx);
}
static inline kk_main__document kk_main__document_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_main__new_Document(kk_std_core_types__list_unbox(_x, _borrow, _ctx), _ctx);
}

// value declarations
 
// Automatically generated. Retrieves the `items` constructor field of the `:document` type.

static inline kk_std_core_types__list kk_main_document_fs_items(kk_main__document document, kk_context_t* _ctx) { /* (document : document) -> list<item> */ 
  {
    kk_std_core_types__list _x = document.items;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}

kk_main__document kk_main_document_fs__copy(kk_main__document _this, kk_std_core_types__optional items, kk_context_t* _ctx); /* (document, items : ? (list<item>)) -> document */ 
 
// Automatically generated. Retrieves the `name` constructor field of the `:name` type.

static inline kk_string_t kk_main_name_fs_name(kk_main__name name, kk_context_t* _ctx) { /* (name : name) -> string */ 
  {
    kk_string_t _x = name.name;
    return kk_string_dup(_x, _ctx);
  }
}

static inline bool kk_main_annotation_fs_eq(kk_main__annotation an____derived__eq__1, kk_main__annotation an____derived__eq__2, kk_context_t* _ctx) { /* (an__derived_eq_1 : annotation, an__derived_eq_2 : annotation) -> bool */ 
  {
    return true;
  }
}

static inline bool kk_main_annotation_fs__lp__eq__eq__rp_(kk_main__annotation x, kk_main__annotation y, kk_context_t* _ctx) { /* (x : annotation, y : annotation) -> bool */ 
  {
    return true;
  }
}

static inline bool kk_main_name_fs_eq(kk_main__name na____derived__eq__1, kk_main__name na____derived__eq__2, kk_context_t* _ctx) { /* (na__derived_eq_1 : name, na__derived_eq_2 : name) -> bool */ 
  kk_string_t _x_x149;
  {
    kk_string_t _x = na____derived__eq__1.name;
    _x_x149 = _x; /*string*/
  }
  kk_string_t _x_x150;
  {
    kk_string_t _x_0 = na____derived__eq__2.name;
    _x_x150 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x149,_x_x150,kk_context());
}

static inline bool kk_main_name_fs__lp__eq__eq__rp_(kk_main__name x, kk_main__name y, kk_context_t* _ctx) { /* (x : name, y : name) -> bool */ 
  kk_string_t _x_x151;
  {
    kk_string_t _x = x.name;
    _x_x151 = _x; /*string*/
  }
  kk_string_t _x_x152;
  {
    kk_string_t _x_0 = y.name;
    _x_x152 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x151,_x_x152,kk_context());
}

static inline bool kk_main_value_fs_eq(kk_main__value va____derived__eq__1, kk_main__value va____derived__eq__2, kk_context_t* _ctx) { /* (va__derived_eq_1 : value, va__derived_eq_2 : value) -> bool */ 
  {
    kk_string_t va____derived__eq__11 = va____derived__eq__1.string;
    kk_string_t va____derived__eq__21 = va____derived__eq__2.string;
    return kk_string_is_eq(va____derived__eq__11,va____derived__eq__21,kk_context());
  }
}

static inline bool kk_main_value_fs__lp__eq__eq__rp_(kk_main__value x, kk_main__value y, kk_context_t* _ctx) { /* (x : value, y : value) -> bool */ 
  {
    kk_string_t va____derived__eq__11 = x.string;
    kk_string_t va____derived__eq__21 = y.string;
    return kk_string_is_eq(va____derived__eq__11,va____derived__eq__21,kk_context());
  }
}

bool kk_main_item_fs_eq(kk_main__item it____derived__eq__1, kk_main__item it____derived__eq__2, kk_context_t* _ctx); /* (it__derived_eq_1 : item, it__derived_eq_2 : item) -> bool */ 

static inline bool kk_main_item_fs__lp__eq__eq__rp_(kk_main__item x, kk_main__item y, kk_context_t* _ctx) { /* (x : item, y : item) -> bool */ 
  return kk_main_item_fs_eq(x, y, _ctx);
}


// lift anonymous function
struct kk_main_document_fs_eq_fun164__t {
  struct kk_function_s _base;
};
extern bool kk_main_document_fs_eq_fun164(kk_function_t _fself, kk_box_t _b_x12, kk_box_t _b_x13, kk_context_t* _ctx);
static inline kk_function_t kk_main_document_fs_new_eq_fun164(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_document_fs_eq_fun164, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}


static inline bool kk_main_document_fs_eq(kk_main__document do____derived__eq__1, kk_main__document do____derived__eq__2, kk_context_t* _ctx) { /* (do__derived_eq_1 : document, do__derived_eq_2 : document) -> bool */ 
  kk_std_core_types__list _x_x162;
  {
    kk_std_core_types__list _x = do____derived__eq__1.items;
    _x_x162 = _x; /*list<main/item>*/
  }
  kk_std_core_types__list _x_x163;
  {
    kk_std_core_types__list _x_0 = do____derived__eq__2.items;
    _x_x163 = _x_0; /*list<main/item>*/
  }
  return kk_std_core_list__lp__eq__eq__rp_(_x_x162, _x_x163, kk_main_document_fs_new_eq_fun164(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_document_fs__lp__at_x_fun169__t_eq__eq__rp_ {
  struct kk_function_s _base;
};
extern bool kk_main_document_fs__lp__at_x_fun169_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx);
static inline kk_function_t kk_main_document_fs__lp__at_new_x_fun169_eq__eq__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_document_fs__lp__at_x_fun169_eq__eq__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}


static inline bool kk_main_document_fs__lp__eq__eq__rp_(kk_main__document x, kk_main__document y, kk_context_t* _ctx) { /* (x : document, y : document) -> bool */ 
  kk_std_core_types__list _x_x167;
  {
    kk_std_core_types__list _x = x.items;
    _x_x167 = _x; /*list<main/item>*/
  }
  kk_std_core_types__list _x_x168;
  {
    kk_std_core_types__list _x_0 = y.items;
    _x_x168 = _x_0; /*list<main/item>*/
  }
  return kk_std_core_list__lp__eq__eq__rp_(_x_x167, _x_x168, kk_main_document_fs__lp__at_new_x_fun169_eq__eq__rp_(_ctx), _ctx);
}

kk_std_core_types__list kk_main_document_fs_to_env(kk_main__document d, kk_context_t* _ctx); /* (d : document) -> list<(name, value)> */ 
 
// Automatically generated. Tests for the `Pair` constructor of the `:item` type.

static inline bool kk_main_is_pair(kk_main__item item, kk_context_t* _ctx) { /* (item : item) -> bool */ 
  if (kk_main__is_Pair(item, _ctx)) {
    struct kk_main_Pair* _con_x178 = kk_main__as_Pair(item, _ctx);
    kk_main__name _pat_0 = _con_x178->name;
    kk_main__value _pat_2 = _con_x178->value;
    return true;
  }
  {
    struct kk_main_Line_comment* _con_x179 = kk_main__as_Line_comment(item, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `Line-comment` constructor of the `:item` type.

static inline bool kk_main_is_line_comment(kk_main__item item, kk_context_t* _ctx) { /* (item : item) -> bool */ 
  if (kk_main__is_Line_comment(item, _ctx)) {
    struct kk_main_Line_comment* _con_x180 = kk_main__as_Line_comment(item, _ctx);
    return true;
  }
  {
    struct kk_main_Pair* _con_x181 = kk_main__as_Pair(item, _ctx);
    return false;
  }
}

kk_main__name kk_main_name_fs__copy(kk_main__name _this, kk_std_core_types__optional name, kk_context_t* _ctx); /* (name, name : ? string) -> name */ 

static inline kk_main__name kk_main_name_fs_make(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> name */ 
  kk_string_t _x_x183;
  bool _match_x130;
  kk_string_t _x_x184 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x185 = kk_string_empty(); /*string*/
  _match_x130 = kk_string_is_eq(_x_x184,_x_x185,kk_context()); /*bool*/
  if (_match_x130) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x187, 3, "xxx", _ctx)
    _x_x183 = kk_string_dup(_s_x187, _ctx); /*string*/
  }
  else {
    _x_x183 = s; /*string*/
  }
  return kk_main__new_Name(_x_x183, _ctx);
}
 
// Automatically generated. Retrieves the `string` constructor field of the `:value` type.

static inline kk_string_t kk_main_value_fs_string(kk_main__value value, kk_context_t* _ctx) { /* (value : value) -> string */ 
  {
    kk_string_t _x = value.string;
    return kk_string_dup(_x, _ctx);
  }
}

kk_main__value kk_main_value_fs__copy(kk_main__value _this, kk_std_core_types__optional string, kk_context_t* _ctx); /* (value, string : ? string) -> value */ 

static inline kk_main__annotation kk_main_annotation_fs__copy(kk_main__annotation _this, kk_context_t* _ctx) { /* (annotation) -> annotation */ 
  return kk_main__new_Export(_ctx);
}

static inline kk_string_t kk_main_annotation_fs_show(kk_main__annotation an____derived__show, kk_context_t* _ctx) { /* (an__derived_show : annotation) -> string */ 
  {
    kk_define_string_literal(static, _s_x189, 6, "Export", _ctx)
    return kk_string_dup(_s_x189, _ctx);
  }
}

static inline kk_string_t kk_main_name_fs_show(kk_main__name na____derived__show, kk_context_t* _ctx) { /* (na__derived_show : name) -> string */ 
  kk_string_t _x_x190;
  kk_define_string_literal(static, _s_x191, 5, "Name(", _ctx)
  _x_x190 = kk_string_dup(_s_x191, _ctx); /*string*/
  kk_string_t _x_x192;
  kk_string_t _x_x193;
  kk_define_string_literal(static, _s_x194, 5, "name=", _ctx)
  _x_x193 = kk_string_dup(_s_x194, _ctx); /*string*/
  kk_string_t _x_x195;
  kk_string_t _x_x196;
  kk_string_t _x_x197;
  {
    kk_string_t _x = na____derived__show.name;
    _x_x197 = _x; /*string*/
  }
  _x_x196 = kk_std_core_show_string_fs_show(_x_x197, _ctx); /*string*/
  kk_string_t _x_x198;
  kk_define_string_literal(static, _s_x199, 1, ")", _ctx)
  _x_x198 = kk_string_dup(_s_x199, _ctx); /*string*/
  _x_x195 = kk_std_core_types__lp__plus__plus__rp_(_x_x196, _x_x198, _ctx); /*string*/
  _x_x192 = kk_std_core_types__lp__plus__plus__rp_(_x_x193, _x_x195, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x190, _x_x192, _ctx);
}

static inline kk_string_t kk_main_value_fs_show(kk_main__value va____derived__show, kk_context_t* _ctx) { /* (va__derived_show : value) -> string */ 
  {
    kk_string_t string = va____derived__show.string;
    kk_string_t _x_x200;
    kk_define_string_literal(static, _s_x201, 11, "Str(string=", _ctx)
    _x_x200 = kk_string_dup(_s_x201, _ctx); /*string*/
    kk_string_t _x_x202;
    kk_string_t _x_x203 = kk_std_core_show_string_fs_show(string, _ctx); /*string*/
    kk_string_t _x_x204;
    kk_define_string_literal(static, _s_x205, 1, ")", _ctx)
    _x_x204 = kk_string_dup(_s_x205, _ctx); /*string*/
    _x_x202 = kk_std_core_types__lp__plus__plus__rp_(_x_x203, _x_x204, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x200, _x_x202, _ctx);
  }
}

kk_string_t kk_main_item_fs_show(kk_main__item it____derived__show, kk_context_t* _ctx); /* (it__derived_show : item) -> string */ 

kk_string_t kk_main_document_fs_show(kk_main__document do____derived__show, kk_context_t* _ctx); /* (do__derived_show : document) -> string */ 

static inline kk_string_t kk_main_to_pattern(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_string_t _x_x268;
  kk_define_string_literal(static, _s_x269, 2, "${", _ctx)
  _x_x268 = kk_string_dup(_s_x269, _ctx); /*string*/
  kk_string_t _x_x270;
  kk_string_t _x_x271;
  kk_define_string_literal(static, _s_x272, 1, "}", _ctx)
  _x_x271 = kk_string_dup(_s_x272, _ctx); /*string*/
  _x_x270 = kk_std_core_types__lp__plus__plus__rp_(s, _x_x271, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x268, _x_x270, _ctx);
}

kk_main__value kk_main_eval(kk_main__document doc, kk_main__value value, kk_context_t* _ctx); /* (doc : document, value : value) -> value */ 

kk_box_t kk_main__mlift_fixpoint_10055(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_box_t current, kk_function_t f, kk_box_t next, kk_context_t* _ctx); /* forall<a,e> (?(==) : (a, a) -> bool, current : a, f : (a) -> <div|e> a, next : a) -> <div|e> a */ 

kk_box_t kk_main_fixpoint(kk_box_t current_0, kk_function_t f_0, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (current : a, f : (a) -> <div|e> a, ?(==) : (a, a) -> bool) -> <div|e> a */ 

kk_main__document kk_main_document_fs_interp(kk_main__document doc, kk_context_t* _ctx); /* (doc : document) -> document */ 

extern kk_main__document kk_main_example_fs_document;

kk_main__document kk_main_main(kk_context_t* _ctx); /* () -> div document */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
