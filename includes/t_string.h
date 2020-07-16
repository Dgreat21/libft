
#ifndef T_STRING_H
#define T_STRING_H
# include <stdlib.h>
# include "libft.h"
typedef struct	s_string{
	uint32_t	size;
	uint32_t	cur;
	char		*s;
	int			shift;
	struct s_string	*next;
}				t_string;

/*
* Create strings
*/

/*Only init size and malloc size*/
t_string	dg_init_str(uint32_t size);

/*Init and create str*/
t_string	dg_prototype_str(uint32_t size, char *s);

/*Init and duplicate str without*/
t_string	dg_create_str(char *s);

/* return pointer to char c*/
char		*dg_strchr(t_string str, int c);

t_string	dg_copy_str(char *s);

int			dg_strcmp(t_string s1, t_string s2);

t_string	dg_strdup(t_string s);

int			dg_strequ(t_string s1, t_string s2);
size_t		dg_strlen(t_string str);
size_t		dg_strmlen(t_string str, char c);
int			dg_strncmp(t_string s1, t_string s2, size_t n);
int			dg_strnequ(t_string s1, t_string s2, size_t n);
uint16_t	dg_word_counter(t_string s, char c);

t_string 	dg_strjoin(t_string s1, t_string s2);

uint16_t	dg_count(t_string str, int c);
uint16_t	pf_count(t_string str);
void		dg_append(t_string *s1, t_string s2);
void		dg_free(t_string *str);
t_string	dg_itoa(int num);
char		*dg_shstrchr(t_string *str, int c);
t_string	dg_cpy(t_string src, t_string dst);
void		dg_append_char(t_string *s1, int c);
t_string	dg_insert(t_string src, t_string from,
					  uint32_t start, uint32_t len);
t_string	dg_strndup(t_string s, uint32_t len);
t_string	dg_triplestrjoin(t_string s1, t_string s2, t_string s3);
t_string	dg_insert_into(t_string *to, t_string from, uint32_t start,
						uint32_t len);
t_string	dg_strsub(t_string s, unsigned int start, size_t len);

#endif //T_STRING_H
