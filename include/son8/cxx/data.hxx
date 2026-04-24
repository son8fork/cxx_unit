#ifndef SON8_CXX_DATA_HXX
#define SON8_CXX_DATA_HXX

#include <son8/cxx/core.hxx>
// std
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <memory_resource>
#include <queue>
#include <scoped_allocator>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace son8::cxx {
    // C++03
    // -- deque
    using std::deque;
    // -- list
    using std::list;
    // -- map
    using std::map;
    using std::multimap;
    // -- queue
    using std::queue;
    using std::priority_queue;
    // -- set
    using std::set;
    using std::multiset;
    // -- stack
    using std::stack;
    // -- vector
    using std::vector;
    // C++11
    // -- forward_list
    using std::forward_list;
    // -- scoped_allocator
    using std::scoped_allocator_adaptor;
    // -- unordered_map
    using std::unordered_map;
    using std::unordered_multimap;
    // -- unordered_set
    using std::unordered_set;
    using std::unordered_multiset;
    // C++17
    // -- memory_resource
    namespace pmr {
        using std::pmr::get_default_resource;
        using std::pmr::memory_resource;
        using std::pmr::monotonic_buffer_resource;
        using std::pmr::new_delete_resource;
        using std::pmr::null_memory_resource;
        using std::pmr::polymorphic_allocator;
        using std::pmr::pool_options;
        using std::pmr::set_default_resource;
        using std::pmr::synchronized_pool_resource;
        using std::pmr::unsynchronized_pool_resource;
    }
} // namespace son8::cxx

#endif//SON8_CXX_DATA_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
