#ifndef SON8_CXX_TEXT_HXX
#define SON8_CXX_TEXT_HXX

#include <son8/cxx/core.hxx>
// std
#include <charconv>
#include <locale>
#include <regex>
#include <string>
#include <string_view>
// depr-rm?
// #include <codecvt> // depr C++17, rm C++26

namespace son8::cxx {
    // C++03
    // -- locale
    using std::codecvt;
    using std::codecvt_base;
    using std::codecvt_byname;
    using std::collate;
    using std::collate_byname;
    using std::ctype;
    using std::ctype_base;
    using std::ctype_byname;
    using std::has_facet;
    using std::isalnum;
    using std::isalpha;
    using std::iscntrl;
    using std::isdigit;
    using std::isgraph;
    using std::islower;
    using std::isprint;
    using std::ispunct;
    using std::isspace;
    using std::isupper;
    using std::isxdigit;
    using std::locale;
    using std::messages;
    using std::messages_base;
    using std::messages_byname;
    using std::money_base;
    using std::money_get;
    using std::money_put;
    using std::moneypunct;
    using std::moneypunct_byname;
    using std::num_get;
    using std::num_put;
    using std::numpunct;
    using std::numpunct_byname;
    using std::time_base;
    using std::time_get;
    using std::time_get_byname;
    using std::time_put;
    using std::time_put_byname;
    using std::tolower;
    using std::toupper;
    using std::use_facet;
    // -- string
    using std::basic_string;
    using std::char_traits;
    using std::getline;
    using std::string;
    using std::wstring;
    // C++11
    // -- codecvt
    // ---- depr-rm?
    // using std::codecvt_mode; // depr C++17, rm C++26
    // using std::codecvt_utf16; // depr C++17, rm C++26
    // using std::codecvt_utf8; // depr C++17, rm C++26
    // using std::codecvt_utf8_utf16; // depr C++17, rm C++26
    // -- locale
    using std::isblank;
    // ---- depr-rm?
    // using std::wbuffer_convert; // depr C++17, rm C++26
    // using std::wstring_convert; // depr C++17, rm C++26
    // -- regex
    using std::basic_regex;
    using std::cmatch;
    using std::cregex_iterator;
    using std::cregex_token_iterator;
    using std::csub_match;
    using std::match_results;
    using std::regex;
    using std::regex_error;
    using std::regex_iterator;
    using std::regex_match;
    using std::regex_replace;
    using std::regex_search;
    using std::regex_token_iterator;
    using std::regex_traits;
    using std::smatch;
    using std::sregex_iterator;
    using std::sregex_token_iterator;
    using std::ssub_match;
    using std::sub_match;
    using std::wcmatch;
    using std::wcregex_iterator;
    using std::wcregex_token_iterator;
    using std::wcsub_match;
    using std::wregex;
    using std::wsmatch;
    using std::wsregex_iterator;
    using std::wsregex_token_iterator;
    using std::wssub_match;
    // -- string
    using std::stod;
    using std::stof;
    using std::stoi;
    using std::stol;
    using std::stoll;
    using std::stoul;
    using std::stoull;
    using std::to_string;
    using std::to_wstring;
    using std::u16string;
    using std::u32string;
    // C++17
    // -- charconv
    using std::chars_format;
    using std::from_chars;
    using std::from_chars_result;
    using std::to_chars_result;
    using std::to_chars;
    // -- string_view
    using std::basic_string_view;
    using std::string_view;
    using std::u16string_view;
    using std::u32string_view;
    using std::wstring_view;

    inline namespace literals {
        using namespace std::literals;
        // C++14
        // -- string
        inline namespace string_literals { using namespace std::literals::string_literals; }
        // C++17
        // -- string_view
        inline namespace string_view_literals { using namespace std::literals::string_view_literals; }
    }

    namespace regex_constants {
        // C++11
        // -- regex
        using std::regex_constants::error_type;
        using std::regex_constants::match_flag_type;
        using std::regex_constants::syntax_option_type;
    }

    namespace pmr {
        // C++17
        // -- string
        using std::pmr::basic_string;
        using std::pmr::string;
        using std::pmr::u16string;
        using std::pmr::u32string;
        using std::pmr::wstring;
    }


} // namespace son8::cxx

#endif//SON8_CXX_TEXT_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
