int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char    *ft_strrev(char *s){
    int len = ft_strlen(s) - 1;
    int i = 0;
    char tmp;
    while (i <= len / 2)
    {
        tmp = s[i];
        s[i] = s[len - i];
        s[len - i] = tmp;
        i++;
    }
    return (s);
}