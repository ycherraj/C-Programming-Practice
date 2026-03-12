int	ft_atoi_base(const char *str, int str_base)
{
    int	res;
    int	sign;
    int	i;
    int	val;

    res = 0;
    sign = 1;
    i = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            val = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            val = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            val = str[i] - 'A' + 10;
        else
            break ;
        if (val >= str_base)
            break ;
        res = (res * str_base) + val;
        i++;
    }
    return (res * sign);
}
