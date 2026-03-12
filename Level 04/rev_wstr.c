#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return (i - 1);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    char *s = av[1];

    int i = ft_strlen(s);
    int tmp = 0;
    while(i >=0)
    {
        while ( i >=0 && s[i] != ' ')
            i--;
        tmp = i + 1;
        while(s[tmp] && s[tmp] != ' ')
        {
            write(1, &s[tmp], 1);
            tmp++;
        }
        if (i >= 0)
            write(1, " ", 1);
        i--;
    }
    write(1, "\n", 1);
    return (0);
}


