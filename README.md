# libft
Second project in mandatory inner circle branch of 42 curriculum.

Collection of standard C library functions that have been remade to deepen our understanding on how they work. This library is used in every following C language project in 42
curriculum and the use of corresponding standard C library functions is prohibited.

The Makefile of this project compiles `libft.a`-archive file which can be compiled with `.c`-files to gain access to its functions. Remember to include `libft.h` from the `includes`-
folder in your `.c` or `.h`-files, otherwise the functions wouldn't work. Simple `make` command in this repository's root will compile `libft.a`-file.

### Example of compilation of executable with gcc compiler using the 'libft.a'-file:
```
gcc main.c libft.a -o example
```

## List of functions implemented at the time of README update:
- ft_printf
- get_next_line
- ft_isalnum.c
- ft_memalloc.c
- ft_memmove.c
- ft_putnbr.c
- ft_strclr.c
- ft_striter.c
- ft_strmapi.c
- ft_strrchr.c
- ft_toupper.c
- ft_isalpha.c
- ft_memccpy.c
- ft_memset.c
- ft_putnbr_fd.c
- ft_strcmp.c
- ft_striteri.c
- ft_strncat.c
- ft_strsplit.c
- ft_isascii.c
- ft_memchr.c
- ft_putchar.c
- ft_putstr.c
- ft_strcpy.c
- ft_strjoin.c
- ft_strncmp.c
- ft_strstr.c
- ft_isdigit.c
- ft_memcmp.c
- ft_putchar_fd.c
- ft_putstr_fd.c
- ft_strdel.c
- ft_tolower.c
- ft_strncpy.c
- ft_strsub.c
- ft_atoi.c
- ft_atoui.c
- ft_isprint.c
- ft_memcpy.c
- ft_putendl.c
- ft_strdup.c
- ft_strlen.c
- ft_strnequ.c
- ft_strtrim.c
- ft_bzero.c
- ft_itoa.c
- ft_memdel.c
- ft_putendl_fd.c
- ft_strchr.c
- ft_strequ.c
- ft_strmap.c
- ft_strnew.c
- ft_strlcat.c
- ft_strnstr.c
- ft_lstnew.c
- ft_lstdelone.c
- ft_lstdel.c
- ft_lstadd.c
- ft_lstiter.c
- ft_lstmap.c
- ft_intlen.c
- ft_isupper.c
- ft_islower.c
- ft_swap.c
- ft_isspace.c
- ft_longlen.c
- ft_itoa_llong.c
- ft_intlen_llong.c
- ft_itoa_ptr.c
- ft_strrev.c
- ft_strcut.c
- ft_onlydigits.c
- ft_free_array.c
- ft_pr_intarr.c
- ft_pr_chararr.c
- ft_lstapp.c
- ft_lstprint.c
- ft_strarr_free.c
- ft_strarr_malloc.c
- ft_strarrsize.c
- ft_lstfree.c
- ft_lstlen.c
- ft_lstprintint.c
- ft_strarr_print.c
- ft_strarr_size.c
- ft_tabarr_free.c
- ft_tabarr_malloc.c
- ft_tabint_find.c
- ft_tabnequ.c
- ft_arr_free.c
- ft_arr_malloc.c
- ft_strcat.c
- ft_pr_hex.c
- ft_exit.c
- ft_byterev.c
