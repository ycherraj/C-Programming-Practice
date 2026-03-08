#include <unistd.h>

int is_prime(int n){

    if(n < 2 )
        return 0;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int	ft_atoi(const char *str)
{
    int n;
    int i;
    int s;

    n = 0;
    i = 0;
    s = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    if (str[i] == '-' || str[i] == '+' )
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + str[i] - '0';
        i++;
    }

    return (n * s);
}

int main(int ac, char **av){
    int n = ft_atoi(av[1]);
    if (ac != 2 && n < 0)
    {
        write(1, "/n", 1);
        return (0);
    }
    int c = 0;
    int i = 2;
    while (i <= n)
    {
        if (is_prime(i))
            c += i;
        i++;
    }
    #include <stdio.h>
    printf("%d", c);
    return (0);
}