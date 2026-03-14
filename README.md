*This project has been created as part of the 42 curriculum by ckurtul.*

# ft_printf

## Description

This project is a partial re-implementation of the standard C `printf` function. The goal is to understand how variadic functions work in C and to build a formatted output function from scratch without using the original `printf`.

The library handles the following conversion specifiers:

| Function | Description |
|---|---|
| `ft_putchar` | Outputs a single character |
| `ft_putstr` | Outputs a string |
| `ft_putnbr` | Outputs a signed integer |
| `ft_uns_putnbr` | Outputs an unsigned integer |
| `ft_hex_putnbr` | Outputs an integer in lowercase hexadecimal |
| `ft_uphex_putnbr` | Outputs an integer in uppercase hexadecimal |
| `ft_address` | Outputs a pointer address |

## Instructions

### Compilation

Clone the repository and compile the library using the provided Makefile:
```bash
git clone <your-repo-url>
cd ft_printf
make
```

This will generate the `libftprintf.a` static library.

### Usage

To use the library in your own project, link it during compilation:
```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o my_program
./my_program
```

### Cleaning
```bash
make clean    # Remove object files
make fclean   # Remove object files and the library
make re       # Recompile from scratch
```

## Resources

### Documentation & References

- [printf(3) — Linux man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C — cppreference](https://en.cppreference.com/w/c/variadic)
- [IEEE 754 & integer representation](https://en.wikipedia.org/wiki/Two%27s_complement)
- [42 Norm — peer-to-peer school coding standard](https://github.com/42School/norminette)

### AI Usage

AI (Claude by Anthropic) was used during this project for the following tasks:

- **README writing**: The structure and content of this README was drafted with AI assistance based on the project requirements.
- **Debugging assistance**: AI was consulted to help understand edge cases in unsigned integer and hexadecimal conversion.
- **Concept clarification**: Used to clarify how `va_list`, `va_start`, and `va_arg` macros work internally.
