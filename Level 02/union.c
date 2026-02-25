#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    int j;
    char str[300];
    char *s1;
    char *s2;

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    
    i = 0;
    s1 = av[1];
    s2 = av[2];
    while (i < 300)
    {
        str[i] = '\0';
        i++;
    }
    i=0;
    while (s1[i])
    {
        j = 0;
        while (str[j])
        {
            if (str[j] == s1[i])
                break;
            j++;
        }
        if(!str[j])
            str[j] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        j = 0;
        while (str[j])
        {
            if (str[j] == s2[i])
                break;
            j++;
        }
        if(!str[j])
            str[j] = s2[i];
        i++;
    }
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}