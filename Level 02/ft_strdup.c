#include <stdlib.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char    *ft_strdup(char *src)
{
	int			n;
	int			i;
	char			*ptr ;

	n = ft_strlen(src);
	i = 0;
	ptr = malloc (n + 1);
	if (!ptr)
		return (NULL);
	while (i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}