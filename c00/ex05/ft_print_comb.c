#include <stdio.h>

void print_combination(int i, int j, int k) {
    putchar(i + '0');
    putchar(j + '0');
    putchar(k + '0');
    if (i != 7 || j != 8 || k != 9) {
        putchar(',');
        putchar(' ');
    }
}

void ft_print_comb(void) {
    int i, j, k;

    i = 0;
    while (i <= 7) {
        j = i + 1;
        while (j <= 8) {
            k = j + 1;
            while (k <= 9) {
                print_combination(i, j, k);
                k++;
            }
            j++;
        }
        i++;
    }
    putchar('\n');
}

int main() {
    ft_print_comb();
    return 0;
}
