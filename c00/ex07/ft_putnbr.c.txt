#include <stdio.h>

void ft_putnbr(int nb) {
    if (nb == -2147483648) {
        putchar('-');
        putchar('2');
        nb = 147483648;
    }

    if (nb < 0) {
        putchar('-');
        nb = -nb;
    }

    if (nb > 9) {
        ft_putnbr(nb / 10);
    }

    putchar((nb % 10) + '0');
}

int main(void) {
    ft_putnbr(42);
    putchar('\n');

    ft_putnbr(-2147483648);
    putchar('\n');

    ft_putnbr(2147483647);
    putchar('\n');

    ft_putnbr(-12345);
    putchar('\n');

    return 0;
}
