void ft_putstr(char *str)
{
    int i;
    char letter;

    i = 0;
    while (str[i] != '\0')
    {
        letter = str[i];
        write(1, &letter, 1);
    }
}

int main(int args, char **argv)
{
    ft_putstr(argv[1]);
}