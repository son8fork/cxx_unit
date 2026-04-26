#ifndef SON8_CXX_FILE_HXX
#define SON8_CXX_FILE_HXX

#include <son8/cxx/core.hxx>
// std
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <system_error> // is_error_code_enum, make_error_(code|condition) - maybe move system_error to core?

namespace son8::cxx {
    // C++03
    // -- fstream
    using std::basic_filebuf;
    using std::basic_fstream;
    using std::basic_ifstream;
    using std::basic_ofstream;
    using std::filebuf;
    using std::fstream;
    using std::ifstream;
    using std::ofstream;
    using std::wfilebuf;
    using std::wfstream;
    using std::wifstream;
    using std::wofstream;
    // -- iomanip
    using std::get_money;
    using std::get_time;
    using std::put_money;
    using std::put_time;
    using std::quoted;
    using std::resetiosflags;
    using std::setbase;
    using std::setfill;
    using std::setiosflags;
    using std::setprecision;
    using std::setw;
    // -- ios
    using std::basic_ios;
    using std::boolalpha;
    using std::dec;
    using std::fixed;
    using std::fpos;
    using std::hex;
    using std::internal;
    using std::ios;
    using std::ios_base;
    using std::iostream_category;
    using std::left;
    using std::noboolalpha;
    using std::noshowbase;
    using std::noshowpoint;
    using std::noshowpos;
    using std::noskipws;
    using std::nounitbuf;
    using std::nouppercase;
    using std::oct;
    using std::right;
    using std::scientific;
    using std::showbase;
    using std::showpoint;
    using std::showpos;
    using std::skipws;
    using std::streamoff;
    using std::streamsize;
    using std::unitbuf;
    using std::uppercase;
    using std::wios;
    // -- iostream
    using std::cin;
    using std::cout;
    using std::cerr;
    using std::clog;
    using std::wcin;
    using std::wcout;
    using std::wcerr;
    using std::wclog;
    // -- istream
    using std::basic_iostream;
    using std::basic_istream;
    using std::iostream;
    using std::istream;
    using std::wiostream;
    using std::wistream;
    using std::ws;
    // -- iterator<-core.hxx
    using std::istream_iterator;
    using std::istreambuf_iterator;
    using std::ostream_iterator;
    using std::ostreambuf_iterator;
    // -- ostream
    using std::basic_ostream;
    using std::endl;
    using std::ends;
    using std::flush;
    using std::ostream;
    using std::wostream;
    // -- sstream
    using std::basic_istringstream;
    using std::basic_ostringstream;
    using std::basic_stringbuf;
    using std::basic_stringstream;
    using std::istringstream;
    using std::ostringstream;
    using std::stringbuf;
    using std::stringstream;
    using std::wistringstream;
    using std::wostringstream;
    using std::wstringbuf;
    using std::wstringstream;
    // C++11
    // -- ios
    using std::defaultfloat;
    using std::hexfloat;
    using std::io_errc;
    using std::is_error_code_enum; // systen_error
    using std::make_error_code; // system_error
    using std::make_error_condition; // system_error

    namespace filesystem {
        // C++17
        // -- filesystem
        using std::filesystem::absolute;
        using std::filesystem::canonical;
        using std::filesystem::copy;
        using std::filesystem::copy_file;
        using std::filesystem::copy_options;
        using std::filesystem::copy_symlink;
        using std::filesystem::create_directories;
        using std::filesystem::create_directory;
        using std::filesystem::create_directory_symlink;
        using std::filesystem::create_hard_link;
        using std::filesystem::create_symlink;
        using std::filesystem::current_path;
        using std::filesystem::directory_entry;
        using std::filesystem::directory_iterator;
        using std::filesystem::directory_options;
        using std::filesystem::file_size;
        using std::filesystem::file_status;
        using std::filesystem::file_time_type;
        using std::filesystem::file_type;
        using std::filesystem::filesystem_error;
        using std::filesystem::equivalent;
        using std::filesystem::exists;
        using std::filesystem::hard_link_count;
        using std::filesystem::last_write_time;
        using std::filesystem::is_block_file;
        using std::filesystem::is_character_file;
        using std::filesystem::is_directory;
        using std::filesystem::is_empty;
        using std::filesystem::is_fifo;
        using std::filesystem::is_other;
        using std::filesystem::is_regular_file;
        using std::filesystem::is_socket;
        using std::filesystem::is_symlink;
        using std::filesystem::path;
        using std::filesystem::perm_options;
        using std::filesystem::permissions;
        using std::filesystem::perms;
        using std::filesystem::proximate;
        using std::filesystem::read_symlink;
        using std::filesystem::recursive_directory_iterator;
        using std::filesystem::relative;
        using std::filesystem::remove;
        using std::filesystem::remove_all;
        using std::filesystem::rename;
        using std::filesystem::resize_file;
        using std::filesystem::space;
        using std::filesystem::space_info;
        using std::filesystem::status;
        using std::filesystem::status_known;
        using std::filesystem::symlink_status;
        using std::filesystem::temp_directory_path;
        using std::filesystem::weakly_canonical;
        // ---- depr-rm?
        // using std::filesystem::u8path; // depr C++20
    }
} // namespace son8::cxx

#endif//SON8_CXX_FILE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
