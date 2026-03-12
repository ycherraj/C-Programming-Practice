#include <stdlib.h>
static int get_len(long n)
{
    int len = 0;

    if (n <= 0)
        len = 1;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}
char	*ft_itoa(int n)
{
    int len = get_len(n);
    char *str;
    long nbr = n;

    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;
    str[len] = '\0';
    
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }

    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }

    while (n > 0)
    {
        str[len] = (nbr % 10) + '0';
        n = n / 10;
        len--;
    }
    return str;
}