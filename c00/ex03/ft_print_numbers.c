#include <unistd.h>  // Pour la fonction write()

void ft_print_numbers(void) {
    char c;

    // Boucle de '0' à '9'
    for (c = '0'; c <= '9'; c++) {
        write(1, &c, 1);  // Afficher le caractère courant
    }
}
