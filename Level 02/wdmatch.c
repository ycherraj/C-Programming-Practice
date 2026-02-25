#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

int main(int ac, char **av){
    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    char *s1 = av[1];
    char *s2 = av[2];
    char s[ft_strlen(s1)];
    int i = 0;
    int j = 0;
    int k = 0;
    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
              s[k] = s1[i];
              k++;
              break;
            }
            j++;
        }
        if (!s2[j])
        {  
            write (1, "\n", 1);
            return (0);
        }
        i++;
    }
    i = 0;
    while (s1[i] && s[i])
    {
        if (s1[i] != s[i])
        {
            write (1, "\n", 1);
            return (0);
        }
        i++;
    }
    i = 0;
    while(s1[i])
    {
        write(1, &s1[i], 1);
        i++;
    }

}