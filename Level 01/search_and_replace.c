#include <unistd.h>

int main (int av, char *ac[])
{
    int i;

    if (av != 4 )
        return (write(1, "\n", 1));
    
    if ((ac[2][1]) || (ac[3][1]))
        return (write(1, "\n", 1));

    i = 0;
    while (ac[1][i])
    {
        if (ac[1][i] == ac[2][0])
        {
            write(1, &ac[3][0], 1);
            i++;
        }
        else
            write(1, &ac[1][i++], 1);
    }

    write(1, "\n", 1);
    return 0;
}