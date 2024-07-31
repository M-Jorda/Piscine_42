#include <unistd.h>

void ft_putnbr(int nb);

int main() {
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-123);
    write(1, "\n", 1);
    ft_putnbr(0);
    return 0;
}

void ft_putnbr(int nb) {
    char buffer[12];
    int i = 0;
    int is_negative = 0;

    if (nb < 0) {
        is_negative = 1;
        nb = -nb;
    }

    if (nb == 0) {
        buffer[i++] = '0';
    } else {
        while (nb > 0) {
            buffer[i++] = (nb % 10) + '0';
            nb /= 10;
        }
    }

    if (is_negative) {
        buffer[i++] = '-';
    }

    while (i > 0) {
        write(1, &buffer[--i], 1);
    }
}
