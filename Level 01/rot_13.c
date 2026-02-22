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
        if ((ac[1][i] >= 'A' && ac[1][i] < 'N') || (ac[1][i] >= 'a' && ac[1][i] < 'n'))
        {    
            c = ac[1][i] + 13;
            write(1, &c, 1);
        }
        else if ((ac[1][i] >= 'N' && ac[1][i] <= 'Z') || (ac[1][i] >= 'n' && ac[1][i] <= 'z'))
        {
            c = ac[1][i] - 13;
            write(1, &c, 1);
        }
        else
            write(1, &ac[1][i], 1);
        i++;
    }
    
    write(1, "\n", 1);
    return 0;
}