#include <unistd.h>

// Déclaration de la fonction
void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    ft_putchar('A');  // Affiche le caractère 'A'
    return 0;
}


cmd : gcc -o main main.c
