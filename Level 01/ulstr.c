#include <unistd.h>

int main (int av, char *ac[])
{
    int i;
    char c;

    if (av != 2 )
        return (write(1, "\n", 1));

    i = 0;
    while (ac[1][i])
    {
        if ((ac[1][i] >= 'A' && ac[1][i] <= 'Z'))
        {
            c = ac[1][i] + 32;
            write(1, &c, 1);
            i++;
        }
        else if ((ac[1][i] >= 'a' && ac[1][i] <= 'z'))
        {
            c = ac[1][i] - 32;
            write(1, &c, 1);
            i++;
        }
        else
            write(1, &ac[1][i++], 1);
    }

    write(1, "\n", 1);
    return 0;
}