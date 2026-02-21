#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int Age;
    bool DriverLicense;
    bool HasRecommendation;
}roles;

roles ReadNumbre(void)
{
    roles info;
    int temp;

    printf("Enter your age: ");
    scanf("%d", &info.Age);

    printf("You Have Driver License? (1 = Yes, 0 = No): ");
    scanf("%d", &temp);
    info.DriverLicense = temp ? true : false;

    printf("You Have Recommendation? (1 = Yes, 0 = No): ");
    scanf("%d", &temp);
    info.HasRecommendation = temp ? true : false;

    return info;
}

bool IsAccepted(roles info)
{
    return(((info.Age >= 21) && (info.DriverLicense)) || (info.HasRecommendation) );
}

void CheckAgeLicense(roles info)
{
    if ((IsAccepted(info)))
        printf("Hired\n");
    else
        printf("Rejected\n");
}

int main()
{
    CheckAgeLicense(ReadNumbre());
    
    return 0;
}