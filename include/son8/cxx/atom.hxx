#ifndef SON8_CXX_ATOM_HXX
#define SON8_CXX_ATOM_HXX

#include <son8/cxx/core.hxx>
// std
#include <atomic>
#include <condition_variable>
#include <future>
#include <mutex>
#include <shared_mutex>
#include <thread>

namespace son8::cxx {
    // C++11
    // -- atomic
    using std::atomic;
    using std::atomic_bool;
    using std::atomic_char;
    using std::atomic_char16_t;
    using std::atomic_char32_t;
    using std::atomic_compare_exchange_strong;
    using std::atomic_compare_exchange_strong_explicit;
    using std::atomic_compare_exchange_weak;
    using std::atomic_compare_exchange_weak_explicit;
    using std::atomic_fetch_add;
    using std::atomic_fetch_add_explicit;
    using std::atomic_fetch_and;
    using std::atomic_fetch_and_explicit;
    using std::atomic_fetch_or;
    using std::atomic_fetch_or_explicit;
    using std::atomic_fetch_sub;
    using std::atomic_fetch_sub_explicit;
    using std::atomic_fetch_xor_explicit;
    using std::atomic_fetch_xor;
    using std::atomic_flag;
    using std::atomic_flag_clear;
    using std::atomic_flag_clear_explicit;
    using std::atomic_flag_test_and_set;
    using std::atomic_flag_test_and_set_explicit;
    using std::atomic_exchange;
    using std::atomic_exchange_explicit;
    using std::atomic_schar;
    using std::atomic_long;
    using std::atomic_llong;
    using std::atomic_int;
    using std::atomic_int8_t;
    using std::atomic_int16_t;
    using std::atomic_int32_t;
    using std::atomic_int64_t;
    using std::atomic_int_least16_t;
    using std::atomic_int_least32_t;
    using std::atomic_int_least64_t;
    using std::atomic_int_least8_t;
    using std::atomic_int_fast16_t;
    using std::atomic_int_fast32_t;
    using std::atomic_int_fast64_t;
    using std::atomic_int_fast8_t;
    using std::atomic_intptr_t;
    using std::atomic_intmax_t;
    using std::atomic_is_lock_free;
    using std::atomic_load;
    using std::atomic_load_explicit;
    using std::atomic_ptrdiff_t;
    using std::atomic_short;
    using std::atomic_signal_fence;
    using std::atomic_size_t;
    using std::atomic_store;
    using std::atomic_store_explicit;
    using std::atomic_thread_fence;
    using std::atomic_uint;
    using std::atomic_uint_fast16_t;
    using std::atomic_uint_fast32_t;
    using std::atomic_uint_fast64_t;
    using std::atomic_uint_fast8_t;
    using std::atomic_uint_least16_t;
    using std::atomic_uint_least32_t;
    using std::atomic_uint_least64_t;
    using std::atomic_uint_least8_t;
    using std::atomic_uint16_t;
    using std::atomic_uint32_t;
    using std::atomic_uint64_t;
    using std::atomic_uint8_t;
    using std::atomic_uintptr_t;
    using std::atomic_uintmax_t;
    using std::atomic_ulong;
    using std::atomic_ullong;
    using std::atomic_ushort;
    using std::atomic_uchar;
    using std::atomic_wchar_t;
    using std::memory_order;
    // ---- depr-rm?
    // using std::atomic_init; // deprecated C++20
    // using std::kill_dependency; // deprecated C++26
    // -- condition_variable
    using std::condition_variable;
    using std::condition_variable_any;
    using std::cv_status;
    using std::notify_all_at_thread_exit;
    // -- future
    using std::async;
    using std::future;
    using std::future_category;
    using std::future_errc;
    using std::future_error;
    using std::future_status;
    using std::launch;
    using std::packaged_task;
    using std::promise;
    using std::shared_future;
    // -- memory<-core.hxx
    using std::allocate_shared;
    using std::const_pointer_cast;
    using std::dynamic_pointer_cast;
    using std::enable_shared_from_this;
    using std::get_deleter;
    using std::make_shared;
    using std::owner_less;
    using std::shared_ptr;
    using std::static_pointer_cast;
    using std::weak_ptr;
    // -- mutex
    using std::adopt_lock;
    using std::adopt_lock_t;
    using std::call_once;
    using std::defer_lock;
    using std::defer_lock_t;
    using std::lock;
    using std::lock_guard;
    using std::mutex;
    using std::once_flag;
    using std::recursive_mutex;
    using std::recursive_timed_mutex;
    using std::timed_mutex;
    using std::try_lock;
    using std::try_to_lock;
    using std::try_to_lock_t;
    using std::unique_lock;
    // -- thread
    using std::thread;
    // C++14
    // -- shared_mutex
    using std::shared_lock;
    using std::shared_timed_mutex;
    // C++17
    // -- memory<-core.hxx
    using std::reinterpret_pointer_cast;
    // -- mutex
    using std::scoped_lock;
    // -- shared_mutex
    using std::shared_mutex;

    namespace this_thread {
        // C++11
        // -- thread
        using std::this_thread::get_id;
        using std::this_thread::yield;
        using std::this_thread::sleep_for;
        using std::this_thread::sleep_until;
    }

} // namespace son8::cxx

#endif//SON8_CXX_ATOM_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
