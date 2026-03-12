#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    char *s = av[1];
    
    if (ac != 2)
        return (write(1, "\n", 1));

    while (s[i])
        i++;
    i--;
    while (i >= 0 && s[i] == ' ')
        i--;
    j = i;
    while (i >= 0 && s[i] != ' ')
        i--;
    i++;
    
    while (i <= j)
    {
        write (1, &s[i], 1);
        i++;
    }
    write (1, "\n", 1);
    return 0;
}