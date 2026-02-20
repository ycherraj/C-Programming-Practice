#include <stdio.h>

struct FullName
{
    char FirstName[30];
    char LastName[30];
};

struct FullName ReadName()
{
    struct FullName Name;
    printf("Enter Your First Name : ");
    scanf("%s",Name.FirstName);
    printf("Enter Your Last Name : ");
    scanf("%s",Name.LastName);
    return Name;
}

void    PrintName()
{
    struct FullName Name;
    Name = ReadName();
    printf("Your FullName is : %s %s\n",Name.FirstName, Name.LastName);
}

int main()
{
    PrintName();
    
    return 0;
}