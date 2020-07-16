#include "libft.h"

char	*ft_strndup(const char *src, int32_t len)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	i = (i > len) ? len : i;
	if ((dest = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}