#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX

// std
#include <array>
#include <initializer_list>
#include <limits>
#include <new>
#include <tuple>
#include <utility>

namespace son8::cxx {
    // C++03
    // -- _many_
    using std::swap;
    // -- limits
    using std::float_denorm_style;
    using std::float_round_style;
    using std::numeric_limits;
    // -- utility
    using std::make_pair;
    using std::pair;
    // C++11
    // -- _many_
    using std::begin;
    using std::end;
    using std::get;
    using std::ignore;
    using std::tuple_element;
    using std::tuple_size;
    // -- array
    using std::array;
    // -- initializer_list
    using std::initializer_list;
    // -- tuple
    using std::make_tuple;
    using std::tuple;
    using std::tie;
    // -- utility
    using std::forward;
    using std::move;
    // C++14
    // -- _many_
    using std::crbegin;
    using std::crend;
    using std::rbegin;
    using std::rend;
    // -- utility
    using std::exchange;
    // C++17
    // -- _many_
    using std::data;
    using std::empty;
    using std::size;
    // -- new
    using std::launder;
    // -- utility
    using std::as_const;

} // namespace son8::cxx

#endif//SON8_CXX_CORE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
