#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char name[] = "Yassin Cherraj";
    int age = 24;
    char city[] = "Tiflet";
    char country[] = "Morocco";
    float msalary = 5000;
    float ysalary = msalary * 12;
    char gender = 'M';
    bool married = 0;

    printf("*******************************\n");
    printf("Name : %s\n",name);
    printf("Age : %d\n",age);
    printf("City : %s\n",city);
    printf("Country : %s\n",country);
    printf("Mounthly Salary : %.2f\n",msalary);
    printf("Yearly Salary : %.2f\n",ysalary);
    printf("Gender : %c\n",gender);
    printf("Married : %d\n",married);
    printf("*******************************\n");

    return 0;
}