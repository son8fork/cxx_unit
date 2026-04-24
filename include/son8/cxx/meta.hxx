#ifndef SON8_CXX_META_HXX
#define SON8_CXX_META_HXX

#include <son8/cxx/core.hxx>
// std
#include <ratio>
#include <type_traits>

namespace son8::cxx {
    // C++11
    // -- ratio
    using std::atto;
    using std::centi;
    using std::deca;
    using std::deci;
    using std::exa;
    using std::femto;
    using std::giga;
    using std::hecto;
    using std::kilo;
    using std::mega;
    using std::micro;
    using std::milli;
    using std::nano;
    using std::peta;
    using std::pico;
    using std::ratio;
    using std::ratio_add;
    using std::ratio_divide;
    using std::ratio_equal;
    using std::ratio_greater;
    using std::ratio_greater_equal;
    using std::ratio_less;
    using std::ratio_less_equal;
    using std::ratio_multiply;
    using std::ratio_not_equal;
    using std::ratio_subtract;
    using std::tera;
    // -- type_traits
    using std::add_const;
    using std::add_cv;
    using std::add_lvalue_reference;
    using std::add_pointer;
    using std::add_rvalue_reference;
    using std::add_volatile;
    using std::alignment_of;
    using std::common_type;
    using std::conditional;
    using std::decay;
    using std::false_type;
    using std::enable_if;
    using std::extent;
    using std::has_virtual_destructor;
    using std::integral_constant;
    using std::is_abstract;
    using std::is_arithmetic;
    using std::is_array;
    using std::is_assignable;
    using std::is_base_of;
    using std::is_class;
    using std::is_compound;
    using std::is_constructible;
    using std::is_const;
    using std::is_convertible;
    using std::is_copy_assignable;
    using std::is_copy_constructible;
    using std::is_default_constructible;
    using std::is_destructible;
    using std::is_empty;
    using std::is_enum;
    using std::is_floating_point;
    using std::is_fundamental;
    using std::is_function;
    using std::is_integral;
    using std::is_lvalue_reference;
    using std::is_member_function_pointer;
    using std::is_member_object_pointer;
    using std::is_member_pointer;
    using std::is_move_assignable;
    using std::is_move_constructible;
    using std::is_nothrow_assignable;
    using std::is_nothrow_constructible;
    using std::is_nothrow_copy_assignable;
    using std::is_nothrow_copy_constructible;
    using std::is_nothrow_default_constructible;
    using std::is_nothrow_destructible;
    using std::is_nothrow_move_assignable;
    using std::is_nothrow_move_constructible;
    using std::is_null_pointer;
    using std::is_object;
    using std::is_pointer;
    using std::is_polymorphic;
    using std::is_reference;
    using std::is_rvalue_reference;
    using std::is_same;
    using std::is_scalar;
    using std::is_signed;
    using std::is_standard_layout;
    using std::is_trivially_assignable;
    using std::is_trivially_constructible;
    using std::is_trivially_copy_assignable;
    using std::is_trivially_copy_constructible;
    using std::is_trivially_copyable;
    using std::is_trivially_default_constructible;
    using std::is_trivially_destructible;
    using std::is_trivially_move_assignable;
    using std::is_trivially_move_constructible;
    using std::is_union;
    using std::is_unsigned;
    using std::is_void;
    using std::is_volatile;
    using std::make_signed;
    using std::make_unsigned;
    using std::true_type;
    using std::rank;
    using std::remove_all_extents;
    using std::remove_const;
    using std::remove_cv;
    using std::remove_extent;
    using std::remove_pointer;
    using std::remove_reference;
    using std::remove_volatile;
    using std::underlying_type;
    // ---- depr-rm?
    // using std::align_storage; // depr C++23
    // using std::align_union; // depr C++23
    // using std::is_literal_type; // depr C++17, rm C++20
    // using std::is_pod; // depr C++20
    // using std::is_trivial; // depr C++26
    // using std::result_of; // rm C++20
    // C++14
    // -- type_traits
    using std::is_final;
    // -- utility<-core
    using std::integer_sequence;
    // C++17
    // -- type_traits
    using std::bool_constant;
    using std::conjunction;
    using std::disjunction;
    using std::has_unique_object_representations;
    using std::invoke_result;
    using std::is_aggregate;
    using std::is_invocable;
    using std::is_invocable_r;
    using std::is_nothrow_invocable;
    using std::is_nothrow_invocable_r;
    using std::is_nothrow_swappable;
    using std::is_nothrow_swappable_with;
    using std::is_swappable;
    using std::is_swappable_with;
    using std::negation;
    using std::void_t;
} // namespace son8::cxx

#endif//SON8_CXX_META_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
