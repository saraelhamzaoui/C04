int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
            write(1, &av[1][i], 1);
    }
    write(1, "\n", 1);
}