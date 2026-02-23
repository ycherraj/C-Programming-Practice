#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int Num1;
    int Num2;

    if (ac != 4)
        return (printf("\n"));
    
    Num1 = atoi(av[1]);
    Num2 = atoi(av[3]);

    if (av[2][0] == '+')
        printf("%d", Num1 + Num2);
    else if (av[2][0]  == '-')
        printf("%d", Num1 - Num2);
    else if (av[2][0]  == '*')
        printf("%d", Num1 * Num2);
    else if (av[2][0] == '/' && Num2 != 0)
        printf("%d", Num1 / Num2);
    else if (av[2][0]  == '%' && Num2 != 0)
        printf("%d", Num1 % Num2);

    printf("\n");
    return 0;
}