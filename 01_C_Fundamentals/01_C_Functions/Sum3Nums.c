#include <stdio.h>

void  ReadNumbers(int* Nums)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Please Enter Number %d: ", i+1);
        scanf("%d", &Nums[i]);
    }
}

int     SumNumbers(int* Nums)
{
    return (Nums[0]+Nums[1]+Nums[2]);
}

void    PrintSum(int Sum)
{
    printf("Sum is : %d\n",Sum);
}

int main()
{
    int Nums[3];

    ReadNumbers(Nums);
    PrintSum(SumNumbers(Nums));
    
    return 0;
}