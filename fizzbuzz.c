void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_n(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + 48);
}

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("fizzbuzz\n");
        else if (i % 3 == 0)
            printf("fizz\n");
        else if (i % 5 == 0)
            printf("buzz\n");
        else
            print_n(i);
        i++;
    }
}