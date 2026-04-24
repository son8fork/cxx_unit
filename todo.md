# TODO

are all tag struct need to be putten into `meta` header?
are all objects that can throw or has specific exception class needs be putten into `flow` header?
seems functional should be included in `data` (containers and algorithms)
seems memory should be coupled with `data` (no at least because of unique_ptr that must be core)

- _many_
  - 11 uses_allocator: `core?`
- new
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
  - 17 monostate: forward declared, main header is variant
  - 11 piecewise_construct* tags
  - 17 in_place* tags
  - 11 move_if_noexcept: `data?`

## remaining
> `code`: algorithm complex execution numeric random valarray

- any
- bitset
- chrono
- functional
- iterator
- memory
- new
- optional
- tuple
- utility
- variant
