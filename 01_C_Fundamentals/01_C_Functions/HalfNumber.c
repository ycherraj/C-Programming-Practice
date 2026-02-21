#include <stdio.h>

int   ReadNumber()
{
    int   n;

    printf("Please Enter Number : ");
    scanf("%d", &n);
    
    return n;
}

float   HalfNumber(int n)
{
    return (float)(n / 2);
}

void    PrintHalfNumber(int n)
{
    printf("Half of %d is %.2f\n",n, HalfNumber(n));
}

int main()
{
    PrintHalfNumber(ReadNumber());
    
    return 0;
}