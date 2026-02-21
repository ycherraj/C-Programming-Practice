#include <stdio.h>

void   ReadNumbers(int* Num1, int* Num2, int* Num3)
{
        printf("Please Enter Number 1 : ");
        scanf("%d", Num1);
        printf("Please Enter Number 2 : ");
        scanf("%d", Num2);
        printf("Please Enter Number 3 : ");
        scanf("%d", Num3);
}

int     SumNumbers(int Num1, int Num2, int Num3)
{
    return (Num1 + Num2 + Num3);
}

void    PrintSum(int Sum)
{
    printf("Sum is : %d\n",Sum);
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(&Num1,&Num2,&Num3);
    PrintSum(SumNumbers(Num1,Num2,Num3));
    
    return 0;
}