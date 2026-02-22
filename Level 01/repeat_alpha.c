#include <unistd.h>

int main (int av, char *ac[])
{
    int i;
    int j;
    int count;

    if (av != 2 )
        return (write(1, "\n", 1));
    i = 0;
    while (ac[1][i])
    {
        if (ac[1][i] >= 'A' && ac[1][i] <= 'Z')
        {
            count = ac[1][i] - 'A' + 1;
            j = 0;
            while (j < count)
            {
                write(1, &ac[1][i], 1);
                j++;
            }
        }
        else if (ac[1][i] >= 'a' && ac[1][i] <= 'z')
        {
            count = ac[1][i] - 'a' + 1;
            j = 0;
            while (j < count)
            {
                write(1, &ac[1][i], 1);
                j++;
            }
        }
        else
            write(1, &ac[1][i], 1);
        i++;
    }
    write(1, "\n", 1);

    return 0;
}