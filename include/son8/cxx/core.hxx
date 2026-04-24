#ifndef SON8_CXX_CORE_HXX
#define SON8_CXX_CORE_HXX

// std
#include <array>
#include <functional> // TODO skipped entities
#include <initializer_list>
#include <iosfwd>
#include <limits>
#include <new> // TODO skipped entities
#include <tuple> // TODO skipped entities
#include <typeindex>
#include <typeinfo>
#include <utility> // TODO skipped entities

namespace son8::cxx {
    // C++03
    // -- _many_
    using std::swap;
    // -- iosfwd
    using std::allocator;
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
    // -- limits
    using std::float_denorm_style;
    using std::float_round_style;
    using std::numeric_limits;
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
    // -- initializer_list
    using std::initializer_list;
    // -- iosfwd
    using std::u16streampos;
    using std::u32streampos;
    // -- tuple
    using std::make_tuple;
    using std::tuple;
    using std::tie;
    // -- typeindex
    using std::type_index;
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
