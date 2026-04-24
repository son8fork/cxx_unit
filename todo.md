# TODO

are all tag struct need to be putten into `meta` header?
are all objects that can throw or has specific exception class needs be putten into `flow` header?
seems functional should be included in `data` (containers and algorithms)
seems memory should be coupled with `data`

- _many_
  - 11 hash: `core?`
  - 11 uses_allocator: `meta?`
- new
  - 03 bad_alloc: `flow?`
  - 11 bad_array_new_length: `flow?`
  - 17 align_val_t: `meta?`
  - 03 *new_handler: ?
  - 11 get_new_handler: ?
  - 03 nothrow*: `meta?`
  - 17 hardware_destructive_interference_size, hardware_constructive_interference_size: ?
- tuple
  - 17 apply: `func?`
  - 11 forward_as_tuple: ?
  - 11 tuple_cat: ?
  - 17 make_from_tuple: ?
- utility
  - 03 rel_ops: `meta?`
  - 11 declval: `meta?`
  - 14 integer_sequence: ?
  - 17 monostate: forward declared, main header is variant
  - 11 piecewise_construct* tags
  - 17 in_place* tags
  - 11 move_if_noexcept: `data?`

## Possible header names
> used: `core`, `atom`, `meta`, `data`

- `atom`: concurrency and multithreading related, atomic operations
- `code`: algorithms related
- `core`: base functionality included by everything else
- `data`: data structures
- `flow`: error handling related and exceptions, control flow related
- `func`: functional related
- `help`: some helpers like chrono
- `meta`: SFINAE and compile-time related, highly generic
- `oops`: OOP related or entities with bad reputation (eg regex, iostream)
- `plan`: highly generaic entities
- `text`: all text related

## not to do (completed)

any c header related functs, it is under c_header interface library

- array
- atomic
- condition_variable
- deque
- forward_list
- future
- initializer_list
- limits
- list
- map
- memory_resource
- mutex
- queue
- ratio
- set
- stack
- thread
- type_traits
- unordered_map
- unordered_set
- vector
