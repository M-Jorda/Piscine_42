#include "ft_putchar.h"

void print_first_or_last_line(int x, int is_first)
{
    int i;

    if (x > 0)
    {
        if (is_first)
            ft_putchar('/');
        else
            ft_putchar('\\');
    }
    for (i = 1; i < x - 1; i++)
    {
        ft_putchar('*');
    }
    if (x > 1)
    {
        if (is_first)
            ft_putchar('\\');
        else
            ft_putchar('/');
    }
    ft_putchar('\n');
}

void print_middle_line(int x)
{
    int i;

    if (x > 0)
    {
        ft_putchar('*');
    }
    for (i = 1; i < x - 1; i++)
    {
        ft_putchar(' ');
    }
    if (x > 1)
    {
        ft_putchar('*');
    }
    ft_putchar('\n');
}

void rush(int x, int y)
{
    int i;

    if (x <= 0 || y <= 0)
        return;

    print_first_or_last_line(x, 1);
    for (i = 1; i < y - 1; i++)
    {
        print_middle_line(x);
    }
    if (y > 1)
    {
        print_first_or_last_line(x, 0);
    }
}
