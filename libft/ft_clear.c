#include "libft.h"

void	ft_clear(char ***res)
{
	int	i;

	if (!res || !(*res))
		return ;
	i = 0;
	while ((*res)[i])
	{
		free((*res)[i]);
		i++;
	}
	free(*res);
	*res = NULL;
}
