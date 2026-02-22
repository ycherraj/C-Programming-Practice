#include <unistd.h>

int main(void)
{
    unsigned int i;
    char c;
    char* p;

    p = &c;
    i = 1;
    while ((i <= 100))
    {
        if ((i % 3 == 0) && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if ((i % 3 == 0))
            write(1, "fizz", 4);
        else if ((i % 5) == 0)
            write(1, "buzz", 4);
        else
        {
            if (i < 10)
            {
                c = i + '0';
                write(1, p , 1);
            }
            else if (i < 100)
            {
                c = (i / 10) + '0';
                write(1, p , 1);
                c = (i % 10) + '0';
                write(1, p , 1);
            }
            else
                write(1, "100" , 3);
        }
            
        write(1, "\n" , 1);
        i++;
    }
    return 0;
}