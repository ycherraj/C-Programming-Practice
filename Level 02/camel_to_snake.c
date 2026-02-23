#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    char c;

    if (ac != 2)
        return (write(1, "\n", 1));

    i = 0;
    while (ac != 2 && av[1][i])
    {
        c = av[1][i];
        if (c >= 'A' && c <= 'Z')
        {
            write (1, "_", 1);
            c = c + 32;
            write (1, &c, 1);
        }
        else
            write (1, &c, 1);
        i++;
    }

    write (1, "\n", 1);
    return 0;
}