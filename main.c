#include <unistd.h>

int ft_atoi(char *str)
{
    int num = 0;
    int i = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return (num * sign);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = 2147483648;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + 48);
}

// int main(int ac, char **av)
// {
//     if (ac == 2)
//         ft_putnbr(ft_atoi(av[1]));
// }

// int main(int ac, char **av)
// {
//     int i = 1;
//     while (i <= 100)
//     {
//         ft_putnbr(i);
//         ft_putchar('\n');
//         i++;
//     }
// }