
#ifndef T_STRING_H
#define T_STRING_H
# include <stdlib.h>
# include "libft.h"
typedef struct	s_string{
	uint32_t	size;
	uint32_t	cur;
	char		*s;
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

int		dg_strequ(t_string s1, t_string s2);
size_t	dg_strlen(t_string str);
size_t	dg_strmlen(t_string str, char c);
int		dg_strncmp(t_string s1, t_string s2, size_t n);
int		dg_strnequ(t_string s1, t_string s2, size_t n);
uint16_t		dg_word_counter(t_string s, char c);

t_string dg_strjoin(t_string s1, t_string s2);

uint16_t dg_count(t_string str, int c);
uint16_t pf_count(t_string str);
void dg_append(t_string *s1, t_string s2);
void	dg_free(t_string *str);


#endif //T_STRING_H
