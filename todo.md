# TODO

are all tag struct need to be putten into `meta` header?
are all objects that can throw or has specific exception class needs be putten into `flow` header?

- new
  - 03 bad_alloc: `flaw?`
  - 11 bad_array_new_length: `flaw?`
  - 17 align_val_t: `meta?`
  - 03 *new_handler: ?
  - 11 get_new_handler: ?
  - 03 nothrow*: `meta?`
  - 17 hardware_destructive_interference_size, hardware_constructive_interference_size: ?
- tuple
  - 11 uses_allocator: `meta?`
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

- `oops`: OOP related or entities with bad reputation (eg regex, iostream)
- `data`: data structures and algorithms related
- `meta`: SFINAE and compile-time related, highly generic
- `help`: some helpers like chrono
- `text`: all text related
- `flow`: error handling related and exceptions, control flow related
- `atom`: concurrency and multithreading related, atomic operations
- `plan`: highly generaic entities

## not to do (completed)

any c header related functs, it is under c_header interface library

- array
- initializer_list
- limits

