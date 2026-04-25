#ifndef SON8_CXX_FUNC_HXX
#define SON8_CXX_FUNC_HXX

#include <son8/cxx/core.hxx>
// std
#include <algorithm>
#include <complex>
#include <execution> // IWYU pragma: keep
#include <numeric>
#include <random>
#include <valarray>

// REMINDER for math related functions like abs, cos, sin, tan, log and other
// \ need to use std directly or use includes from c_header interface library

namespace son8::cxx {
    // C++98
    // -- algorithm
    using std::adjacent_find;
    using std::binary_search;
    using std::copy;
    using std::copy_backward;
    using std::count;
    using std::count_if;
    using std::fill;
    using std::fill_n;
    using std::find;
    using std::find_end;
    using std::find_first_of;
    using std::find_if;
    using std::for_each;
    using std::generate;
    using std::generate_n;
    using std::equal;
    using std::equal_range;
    using std::includes;
    using std::inplace_merge;
    using std::iter_swap;
    using std::lexicographical_compare;
    using std::lower_bound;
    using std::max;
    using std::max_element;
    using std::make_heap;
    using std::merge;
    using std::min;
    using std::min_element;
    using std::mismatch;
    using std::next_permutation;
    using std::nth_element;
    using std::partial_sort;
    using std::partial_sort_copy;
    using std::partition;
    using std::pop_heap;
    using std::prev_permutation;
    using std::push_heap;
    using std::remove;
    using std::remove_copy;
    using std::remove_copy_if;
    using std::remove_if;
    using std::replace;
    using std::replace_copy;
    using std::replace_copy_if;
    using std::replace_if;
    using std::reverse;
    using std::reverse_copy;
    using std::rotate;
    using std::rotate_copy;
    using std::search;
    using std::search_n;
    using std::set_difference;
    using std::set_intersection;
    using std::set_symmetric_difference;
    using std::set_union;
    using std::sort;
    using std::sort_heap;
    using std::stable_partition;
    using std::stable_sort;
    using std::swap;
    using std::swap_ranges;
    using std::transform;
    using std::unique;
    using std::unique_copy;
    using std::upper_bound;
    // ---- depr-rm?
    // using std::random_shuffle; // depr C++14, rm C++17
    // -- complex
    using std::arg;
    using std::complex;
    using std::conj;
    using std::imag;
    using std::norm;
    using std::polar;
    using std::real;
    // -- numeric
    using std::accumulate;
    using std::adjacent_difference;
    using std::inner_product;
    using std::partial_sum;
    // -- valarray
    using std::gslice;
    using std::gslice_array;
    using std::indirect_array;
    using std::mask_array;
    using std::slice;
    using std::slice_array;
    using std::valarray;
    // C++11
    // -- algorithm
    using std::all_of;
    using std::any_of;
    using std::copy_if;
    using std::copy_n;
    using std::find_if_not;
    using std::is_heap;
    using std::is_heap_until;
    using std::is_partitioned;
    using std::is_permutation;
    using std::is_sorted;
    using std::is_sorted_until;
    using std::minmax;
    using std::minmax_element;
    using std::move;
    using std::move_backward;
    using std::none_of;
    using std::partition_copy;
    using std::partition_point;
    using std::shuffle;
    // -- complex
    using std::proj;
    // -- numeric
    using std::iota;
    // -- random
    using std::bernoulli_distribution;
    using std::binomial_distribution;
    using std::cauchy_distribution;
    using std::chi_squared_distribution;
    using std::discard_block_engine;
    using std::discrete_distribution;
    using std::exponential_distribution;
    using std::extreme_value_distribution;
    using std::fisher_f_distribution;
    using std::gamma_distribution;
    using std::geometric_distribution;
    using std::generate_canonical;
    using std::independent_bits_engine;
    using std::knuth_b;
    using std::linear_congruential_engine;
    using std::lognormal_distribution;
    using std::mersenne_twister_engine;
    using std::minstd_rand0;
    using std::minstd_rand;
    using std::mt19937;
    using std::mt19937_64;
    using std::negative_binomial_distribution;
    using std::normal_distribution;
    using std::piecewise_constant_distribution;
    using std::piecewise_linear_distribution;
    using std::poisson_distribution;
    using std::random_device;
    using std::ranlux24;
    using std::ranlux24_base;
    using std::ranlux48;
    using std::ranlux48_base;
    using std::seed_seq;
    using std::shuffle_order_engine;
    using std::student_t_distribution;
    using std::subtract_with_carry_engine;
    using std::uniform_int_distribution;
    using std::uniform_real_distribution;
    using std::weibull_distribution;
    // C++17
    // -- algorithm
    using std::clamp;
    using std::for_each_n;
    using std::sample;
    // -- execution
    using std::is_execution_policy;
    // -- numeric
    using std::exclusive_scan;
    using std::gcd;
    using std::inclusive_scan;
    using std::lcm;
    using std::reduce;
    using std::transform_exclusive_scan;
    using std::transform_inclusive_scan;
    using std::transform_reduce;

    inline namespace literals {
        using namespace std::literals;
        // C++14
        inline namespace complex_literals { using namespace std::literals::complex_literals; }
    }

    namespace execution {
        // C++17
        // -- execution
        using std::execution::par;
        using std::execution::par_unseq;
        using std::execution::parallel_policy;
        using std::execution::parallel_unsequenced_policy;
        using std::execution::seq;
        using std::execution::sequenced_policy;
    }
} // namespace son8::cxx

#endif//SON8_CXX_FUNC_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: cxx_unit C++17 Standard CXX Entities Namespace
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
