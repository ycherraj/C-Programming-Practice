#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    char c;

    if (ac != 2)
        return (write(1, "\n", 1));

    i = 0;
    while (av[1][i])
    {
        c = av[1][i];
        if ((c >= 'A' && c <= 'M'))
        {
            c = 'Z' - (c - 'A');
            write(1, &c, 1);
        }
        else if ((c >= 'a' && c <= 'm'))
        {
            c = 'z' - (c - 'a');
            write(1, &c, 1);
        }
        else if ((c >= 'N' && c <= 'Z'))
        {
            c = 'A' + ('Z' - c);
            write(1, &c, 1);
        }
        else if ((c >= 'n' && c <= 'z'))
        {
            c = 'a' + ('z' - c);
            write(1, &c, 1);
        }
        else
            write(1, &c, 1);
        i++;
    }

    write(1, "\n",1);
    return 0;
}