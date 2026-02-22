#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

int main (int av, char *ac[])
{
    int i;

    if (av != 2 )
        return (write(1, "\n", 1));
        
    i = ft_strlen(ac[1]) - 1;
    while (i >= 0)
    {
        write(1, &ac[1][i], 1);
        i--;
    }
    write(1, "\n", 1);
    return 0;
}