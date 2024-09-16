int ft_atoi(char *str)
{
    int num;
    int sign;
    int i;

    num = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return (num * sign);
}