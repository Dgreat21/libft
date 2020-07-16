cmake_minimum_required(VERSION 3.0)

cmake_policy(SET CMP0076 NEW)

project(LIBFT VERSION 1.0 LANGUAGES C)

set(libft
        libft/endl.c
        libft/error_notice.c
        libft/fract.c
        libft/free_str.c
        libft/ft_atoi.c
        libft/ft_atoi_base.c
        libft/ft_bzero.c
        libft/ft_fswap.c
        libft/ft_isalnum.c
        libft/ft_isalpha.c
        libft/ft_isascii.c
        libft/ft_isdigit.c
        libft/ft_isprint.c
        libft/ft_iswhitespace.c
        libft/ft_itoa.c
        libft/ft_itoa_base.c
        libft/ft_ldel.c
        libft/ft_log.c
        libft/ft_lst_clear.c
        libft/ft_lstadd.c
        libft/ft_lstadd_end.c
        libft/ft_lstdel.c
        libft/ft_lstdelone.c
        libft/ft_lstiter.c
        libft/ft_lstmap.c
        libft/ft_lstnew.c
        libft/ft_memalloc.c
        libft/ft_memccpy.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
        libft/ft_memcpy.c
        libft/ft_memdel.c
        libft/ft_memmove.c
        libft/ft_memset.c
        libft/ft_pow_uint.c
        libft/ft_putchar.c
        libft/ft_putchar_fd.c
        libft/ft_putendl.c
        libft/ft_putendl_fd.c
        libft/ft_putnbr.c
        libft/ft_putnbr_base.c
        libft/ft_putnbr_fd.c
        libft/ft_putstr.c
        libft/ft_putstr_fd.c
        libft/ft_realloc.c
        libft/ft_strcat.c
        libft/ft_strchr.c
        libft/ft_strchr_safe.c
        libft/ft_strclr.c
        libft/ft_strcmp.c
        libft/ft_strcpy.c
        libft/ft_strcpy_safe.c
        libft/ft_strdel.c
        libft/ft_strdup.c
        libft/ft_strdup_safe.c
        libft/ft_strequ.c
        libft/ft_striter.c
        libft/ft_striteri.c
        libft/ft_strjoin.c
        libft/ft_strlcat.c
        libft/ft_strlen.c
        libft/ft_strmap.c
        libft/ft_strmapi.c
        libft/ft_strmlen.c
        libft/ft_strncat.c
        libft/ft_strncmp.c
        libft/ft_strncpy.c
        libft/ft_strnequ.c
        libft/ft_strnew.c
        libft/ft_strnstr.c
        libft/ft_strrchr.c
        libft/ft_strsplit.c
        libft/ft_strstr.c
        libft/ft_strsub.c
        libft/ft_strtrim.c
        libft/ft_swap.c
        libft/ft_tolower.c
        libft/ft_toupper.c
        libft/ft_word_counter.c
        libft/get_next_line.c
        libft/min_max.c
        libft/micro_pf.c
        libft/vardump.c
        libft/ft_clear.c libft/ft_atoll.c libft/ft_atoul.c libft/ft_atoll_base.c
        libft/ft_atoul_base.c libft/ft_lltoa_base.c)

set(t_string
        t_string/dg_strchr.c
        t_string/dg_strcmp.c
        t_string/dg_strdup.c
        t_string/dg_strequ.c
        t_string/dg_strjoin.c
        t_string/dg_strlen.c
        t_string/dg_strmlen.c
        t_string/dg_strncmp.c
        t_string/dg_strnequ.c
        t_string/dg_strnstr.c
        t_string/dg_strrchr.c
        t_string/dg_strsplit.c
        t_string/dg_strstr.c
        t_string/dg_strsub.c
        t_string/dg_strtrim.c
        t_string/dg_word_counter.c
        t_string/init_str.c
        t_string/dg_count_char.c
        t_string/dg_append.c
        t_string/dg_free.c
        t_string/dg_atoi.c
        t_string/dg_atoi_base.c
        t_string/dg_itoa.c
        t_string/dg_itoa_base.c t_string/dg_atoi_base.c t_string/dg_lltoa.c)

set(mini_pf
        mini_pf/mini_pf.c)

include_directories(includes)

set(sources
        ${libft}
        ${t_string}
        ${mini_pf})

add_library(ft STATIC
        ${sources} )

add_executable(pf_test ${sources} pf_test.c)
add_executable(lib_test ${sources} main.c)

target_link_libraries(lib_test ft)