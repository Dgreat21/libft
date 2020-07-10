cmake_minimum_required(VERSION 3.0)

cmake_policy(SET CMP0076 NEW)

project(LIBFT VERSION 1.0 LANGUAGES C)

set(sources
        sources/endl.c
        sources/error_notice.c
        sources/fract.c
        sources/free_str.c
        sources/ft_atoi.c
        sources/ft_atoi_base.c
        sources/ft_bzero.c
        sources/ft_fswap.c
        sources/ft_isalnum.c
        sources/ft_isalpha.c
        sources/ft_isascii.c
        sources/ft_isdigit.c
        sources/ft_isprint.c
        sources/ft_iswhitespace.c
        sources/ft_itoa.c
        sources/ft_itoa_base.c
        sources/ft_ldel.c
        sources/ft_log.c
        sources/ft_lst_clear.c
        sources/ft_lstadd.c
        sources/ft_lstadd_end.c
        sources/ft_lstdel.c
        sources/ft_lstdelone.c
        sources/ft_lstiter.c
        sources/ft_lstmap.c
        sources/ft_lstnew.c
        sources/ft_memalloc.c
        sources/ft_memccpy.c
        sources/ft_memchr.c
        sources/ft_memcmp.c
        sources/ft_memcpy.c
        sources/ft_memdel.c
        sources/ft_memmove.c
        sources/ft_memset.c
        sources/ft_pow_uint.c
        sources/ft_putchar.c
        sources/ft_putchar_fd.c
        sources/ft_putendl.c
        sources/ft_putendl_fd.c
        sources/ft_putnbr.c
        sources/ft_putnbr_base.c
        sources/ft_putnbr_fd.c
        sources/ft_putstr.c
        sources/ft_putstr_fd.c
        sources/ft_realloc.c
        sources/ft_strcat.c
        sources/ft_strchr.c
        sources/ft_strchr_safe.c
        sources/ft_strclr.c
        sources/ft_strcmp.c
        sources/ft_strcpy.c
        sources/ft_strcpy_safe.c
        sources/ft_strdel.c
        sources/ft_strdup.c
        sources/ft_strdup_safe.c
        sources/ft_strequ.c
        sources/ft_striter.c
        sources/ft_striteri.c
        sources/ft_strjoin.c
        sources/ft_strlcat.c
        sources/ft_strlen.c
        sources/ft_strmap.c
        sources/ft_strmapi.c
        sources/ft_strmlen.c
        sources/ft_strncat.c
        sources/ft_strncmp.c
        sources/ft_strncpy.c
        sources/ft_strnequ.c
        sources/ft_strnew.c
        sources/ft_strnstr.c
        sources/ft_strrchr.c
        sources/ft_strsplit.c
        sources/ft_strstr.c
        sources/ft_strsub.c
        sources/ft_strtrim.c
        sources/ft_swap.c
        sources/ft_tolower.c
        sources/ft_toupper.c
        sources/ft_word_counter.c
        sources/get_next_line.c
        sources/min_max.c
        sources/vardump.c)

include_directories(includes)

add_library(ft STATIC
        ${sources})