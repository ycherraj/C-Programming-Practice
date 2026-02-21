#include <stdio.h>

int ReadMark()
{
    int n;

    printf("Please enter your mark : ");
    scanf("%d", &n);

    return n;
}

void PassFail(int n)
{
    if (n >= 50)
        printf("You Passed\n");
    else
        printf("You Faild\n");
}

int main()
{
    PassFail(ReadMark());
    
    return 0;
}