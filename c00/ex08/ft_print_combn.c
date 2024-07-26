#include <stdio.h>

void print_digits(int *digits, int n) {
    for (int i = 0; i < n; i++) {
        putchar(digits[i] + '0');
    }
    if (digits[0] < 10 - n) {
        putchar(',');
        putchar(' ');
    }
}

void ft_print_combn(int n) {
    int digits[10];
    for (int i = 0; i < n; i++) {
        digits[i] = i;
    }

    while (digits[0] <= 10 - n) {
        print_digits(digits, n);

        int i = n - 1;
        while (i >= 0 && digits[i] == 9 - (n - 1 - i)) {
            i--;
        }
        if (i >= 0) {
            digits[i]++;
            for (int j = i + 1; j < n; j++) {
                digits[j] = digits[i] + (j - i);
            }
        } else {
            break;
        }
    }
    putchar('\n');
}

int main() {
    ft_print_combn(2);
    return 0;
}
