#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX

// std
#include <any>
#include <array>
#include <bitset>
#include <chrono>
#include <functional>
#include <initializer_list>
#include <iosfwd>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <optional>
#include <tuple>
#include <typeindex>
#include <typeinfo>
#include <utility>
#include <variant>

namespace son8::cxx {
    // C++03
    // -- _many_
    using std::swap;
    // -- bitset
    using std::bitset;
    // -- functional
    using std::bit_and;
    using std::bit_or;
    using std::bit_xor;
    using std::divides;
    using std::equal_to;
    using std::greater;
    using std::greater_equal;
    using std::less;
    using std::less_equal;
    using std::logical_and;
    using std::logical_not;
    using std::logical_or;
    using std::minus;
    using std::modulus;
    using std::multiplies;
    using std::negate;
    using std::not_equal_to;
    using std::plus;
    // ---- depr-rm?
    // using std::bind1st; // depr C++11, rm C++17
    // using std::bind2nd; // depr C++11, rm C++17
    // using std::binder1st; // depr C++11, rm C++17
    // using std::binder2nd; // depr C++11, rm C++17
    // using std::binary_function; // depr C++11, rm C++17
    // using std::binary_negate; // depr C++17, rm C++20
    // using std::const_mem_fun_t; // depr C++11, rm C++17
    // using std::const_mem_fun_ref_t; // depr C++11, rm C++17
    // using std::const_mem_fun1_t; // depr C++11, rm C++17
    // using std::const_mem_fun1_ref_t; // depr C++11, rm C++17
    // using std::mem_fun; // depr C++11, rm C++17
    // using std::mem_fun_ref; // depr C++11, rm C++17
    // using std::mem_fun_t; // depr C++11, rm C++17
    // using std::mem_fun_ref_t; // depr C++11, rm C++17
    // using std::mem_fun1_t; // depr C++11, rm C++17
    // using std::mem_fun1_ref_t; // depr C++11, rm C++17
    // using std::not1; // depr C++17, rm C++20
    // using std::not2; // depr C++17, rm C++20
    // using std::pointer_to_binary_function; // depr C++11, rm C++17
    // using std::pointer_to_unary_function; // depr C++11, rm C++17
    // using std::ptr_fun; // depr C++11, rm C++17
    // using std::unary_function; // depr C++11, rm C++17
    // using std::unary_negate; // depr C++17, rm C++20
    // -- iosfwd
    using std::basic_filebuf;
    using std::basic_fstream;
    using std::basic_ifstream;
    using std::basic_ios;
    using std::basic_iostream;
    using std::basic_istream;
    using std::basic_istringstream;
    using std::basic_ofstream;
    using std::basic_ostream;
    using std::basic_ostringstream;
    using std::basic_streambuf;
    using std::basic_stringbuf;
    using std::basic_stringstream;
    using std::char_traits;
    using std::filebuf;
    using std::fpos;
    using std::fstream;
    using std::ifstream;
    using std::ios;
    using std::iostream;
    using std::istream;
    using std::istringstream;
    using std::ofstream;
    using std::ostream;
    using std::ostringstream;
    using std::streambuf;
    using std::streampos;
    using std::stringbuf;
    using std::stringstream;
    using std::wfilebuf;
    using std::wfstream;
    using std::wifstream;
    using std::wios;
    using std::wiostream;
    using std::wistream;
    using std::wistringstream;
    using std::wofstream;
    using std::wostream;
    using std::wostringstream;
    using std::wstreambuf;
    using std::wstreampos;
    using std::wstringbuf;
    using std::wstringstream;
    // ---- depr-rm?
    // using std::istrstream; // depr C++03, rm C++26
    // using std::ostrstream; // depr C++03, rm C++26
    // using std::strstream; // depr C++03, rm C++26
    // using std::strstreambuf; // depr C++03, rm C++26
    // -- iterator
    using std::advance;
    using std::back_insert_iterator;
    using std::back_inserter;
    using std::bidirectional_iterator_tag;
    using std::distance;
    using std::forward_iterator_tag;
    using std::front_insert_iterator;
    using std::front_inserter;
    using std::insert_iterator;
    using std::inserter;
    using std::iterator_traits;
    using std::input_iterator_tag;
    using std::output_iterator_tag;
    using std::random_access_iterator_tag;
    using std::reverse_iterator;
    // ---- depr-rm?
    // using std::iterator; // depr C++17
    // -- limits
    using std::float_denorm_style;
    using std::float_round_style;
    using std::numeric_limits;
    // -- memory
    using std::allocator;
    // ---- depr-rm?
    // using std::auto_ptr; // depr C++11, rm C++17
    // using std::get_temporary_buffer; // depr C++17, rm C++20
    // using std::raw_storage_iterator; // depr C++17, rm C++20
    // using std::return_temporary_buffer; // depr C++17, rm C++20
    // -- new
    using std::nothrow;
    using std::nothrow_t;
    // -- typeinfo
    using std::type_info;
    // -- utility
    using std::make_pair;
    using std::pair;
    // C++11
    // -- _many_
    using std::begin;
    using std::end;
    using std::get;
    using std::hash; // functional: TODO list species
    using std::ignore;
    using std::tuple_element;
    using std::tuple_size;
    // -- array
    using std::array;
    // -- functional
    using std::bind;
    using std::cref;
    using std::function;
    using std::mem_fn;
    using std::ref;
    using std::reference_wrapper;
    // -- initializer_list
    using std::initializer_list;
    // -- iosfwd
    using std::u16streampos;
    using std::u32streampos;
    // -- iterator
    using std::make_move_iterator;
    using std::move_iterator;
    using std::next;
    using std::prev;
    // -- memory
    using std::addressof;
    using std::align;
    using std::allocator_arg;
    using std::allocator_arg_t;
    using std::allocator_traits;
    using std::default_delete;
    using std::pointer_traits;
    using std::unique_ptr;
    // ---- depr-rm?
    // using std::declare_no_pointers; // rm C++23
    // using std::declare_reachable; // rm C++23
    // using std::get_pointer_safety; // rm C++23
    // using std::undeclare_no_pointers; // rm C++23
    // using std::undeclare_reachable; // rm C++23
    // -- tuple
    using std::forward_as_tuple;
    using std::make_tuple;
    using std::tuple;
    using std::tuple_cat;
    using std::tie;
    // -- typeindex
    using std::type_index;
    // -- utility
    using std::declval;
    using std::forward;
    using std::move;
    using std::move_if_noexcept;
    using std::piecewise_construct;
    using std::piecewise_construct_t;
    // C++14
    // -- _many_
    using std::crbegin;
    using std::crend;
    using std::rbegin;
    using std::rend;
    // -- functional
    using std::bit_not;
    // -- memory
    using std::make_reverse_iterator;
    using std::make_unique;
    // -- utility
    using std::exchange;
    // C++17
    // -- _many_
    using std::data;
    using std::empty;
    using std::size;
    // -- any
    using std::any;
    using std::any_cast;
    using std::make_any;
    // -- functional
    using std::invoke;
    using std::not_fn;
    // -- memory
    using std::destroy_at;
    // -- new
    using std::align_val_t;
    using std::hardware_constructive_interference_size;
    using std::hardware_destructive_interference_size;
    using std::launder;
    // -- optional
    using std::make_optional;
    using std::nullopt;
    using std::nullopt_t;
    using std::optional;
    // -- tuple
    using std::apply;
    using std::make_from_tuple;
    // -- utility
    using std::as_const;
    using std::in_place;
    using std::in_place_index;
    using std::in_place_index_t;
    using std::in_place_t;
    using std::in_place_type;
    using std::in_place_type_t;
    // -- variant
    using std::get_if;
    using std::holds_alternative;
    using std::monostate;
    using std::variant;
    using std::variant_npos;
    using std::visit;

    inline namespace literals {
        using namespace std::literals;
        // C++14
        // -- chrono
        inline namespace chrono_literals { using namespace std::literals::chrono_literals; }
    }

    namespace chrono {
        // C++11
        // -- chrono
        using std::chrono::duration;
        using std::chrono::duration_cast;
        using std::chrono::duration_values;
        using std::chrono::high_resolution_clock;
        using std::chrono::hours;
        using std::chrono::microseconds;
        using std::chrono::milliseconds;
        using std::chrono::minutes;
        using std::chrono::nanoseconds;
        using std::chrono::seconds;
        using std::chrono::steady_clock;
        using std::chrono::system_clock;
        using std::chrono::time_point;
        using std::chrono::time_point_cast;
    } // namespace son8::cxx::chrono

    namespace placeholders {
        // C++03
        // -- functional
        using namespace std::placeholders;
    } // namespace son8::cxx::placeholders

    // -- utility
    // ---- depr-rm?
    // namespace rel_ops { using namespace std::rel_ops; } // depr C++20

} // namespace son8::cxx

#endif//SON8_CXX_CORE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
