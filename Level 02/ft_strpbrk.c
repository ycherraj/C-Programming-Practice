#include <stddef.h>

char *ft_strpbrk(char *s, char *accept)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                return(s + i);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}