#ifndef SON8_CXX_FLOW_HXX
#define SON8_CXX_FLOW_HXX

#include <son8/cxx/core.hxx>
// std
#include <exception>
#include <stdexcept>
#include <system_error>

namespace son8::cxx {
    // C++03
    // -- exception
    using std::bad_exception;
    using std::exception;
    // using std::get_unexpected; // depr C++11, rm C++17
    using std::set_terminate;
    // using std::set_unexpected; // depr C++11, rm C++17
    using std::terminate;
    using std::terminate_handler;
    // using std::uncaught_exception; // depr C++17, rm C++20
    // using std::unexpected; // depr C++11, rm C++17
    // using std::unexpected_handler; // depr C++11, rm C++17
    // -- new<-core.hxx
    using std::bad_alloc;
    using std::bad_array_new_length;
    // -- stdexcept
    using std::domain_error;
    using std::invalid_argument;
    using std::length_error;
    using std::logic_error;
    using std::out_of_range;
    using std::overflow_error;
    using std::range_error;
    using std::runtime_error;
    using std::underflow_error;
    // -- typeinfo<-core.hxx
    using std::bad_cast;
    using std::bad_typeid;
    // C++11
    // -- exception
    using std::current_exception;
    using std::exception_ptr;
    using std::get_terminate;
    using std::make_exception_ptr;
    using std::nested_exception;
    using std::rethrow_exception;
    using std::rethrow_if_nested;
    using std::throw_with_nested;
    // -- system_error
    using std::errc;
    using std::error_category;
    using std::error_code;
    using std::error_condition;
    using std::generic_category;
    using std::make_error_code;
    using std::make_error_condition;
    using std::is_error_code_enum;
    using std::is_error_condition_enum;
    using std::system_category;
    using std::system_error;
    // C++17
    // -- exception
    using std::uncaught_exceptions;
} // namespace son8::cxx

#endif//SON8_CXX_FLOW_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
