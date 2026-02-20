#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int age;
    bool DriverLicense;
    bool HasRecommendation;
}roles;

roles ReadNumbre()
{
    roles info;
    printf("Enter your age : ");
    scanf("%d", &(info.age));
    printf("You Have Driver License ? ");
    scanf("%d", &(info.DriverLicense));
    printf("You Have Man ? ");
    scanf("%d", &(info.HasRecommendation));
    return info;
}

bool IsAccepted(roles info)
{
    return(((info.age >= 21) && (info.DriverLicense)) || (info.HasRecommendation) );
}

void CheckAgeLicense(roles info)
{
    if ((IsAccepted(info)))
        printf("Hired");
    else
        printf("Rejected");
}

int main()
{
    CheckAgeLicense(ReadNumbre());
    
    return 0;
}