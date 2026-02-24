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