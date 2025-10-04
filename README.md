# push_swap 📐

## Project Overview 📃

**push_swap** is a project from 42 School that focuses on sorting data on a stack using a limited set of operations. The goal is to sort a stack of integers in ascending order with the minimal number of operations.

The project helps improve algorithmic thinking, optimization, and mastery of C programming.

---

## Allowed Operations 📌

The following operations are allowed:

- **sa**: Swap the first 2 elements at the top of stack a.
- **sb**: Swap the first 2 elements at the top of stack b
- **ss**: `sa` and `sb` at the same time.
- **pa**: Take the first element at the top of b and put it at the top of a.
- **pb**: Take the first element at the top of a and put it at the top of b.
- **ra**: Shift up all elements of stack a by 1.
The first element becomes the last one.
- **rb**: Shift up all elements of stack b by 1.
The first element becomes the last one.
- **rr**: `ra` and `rb` at the same time.
- **rra**: : Shift down all elements of stack a by 1.
The last element becomes the first one.
- **rrb**: Shift down all elements of stack b by 1.
The last element becomes the first one.
- **rrr**: `rra` and `rrb` at the same time.

---
## Usage 💡
Run `make` first, then run the `push_swap` program using the following syntax:

```bash
./push_swap [list of integers]
```

## Example ⚡

```bash
./push_swap 5 1 4 2 3
```
- Output
  ```bash
  ra
  pb
  ra
  pb
  sa
  ra
  pa
  pa
  ```
