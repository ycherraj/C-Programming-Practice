#include <stdio.h>

int ReadNumbre()
{
    int n;

    printf("Enter a Numbre : ");
    scanf("%d", &n);

    return n;
}

void CheckNumbre(int n)
{
    if (n % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}

int main()
{
    CheckNumbre(ReadNumbre());
    
    return 0;
}