#include <unistd.h>  // Pour la fonction write()

// Fonction récursive pour afficher les lettres de 'a' à 'z'
void print_char(char c) {
    if (c > 'z') {
        return;  // Condition de terminaison : si le caractère est au-delà de 'z', arrêter la récursion
    }
    write(1, &c, 1);  // Afficher le caractère courant
    print_char(c + 1);  // Appeler la fonction avec le caractère suivant
}

void ft_print_alphabet(void) {
    print_char('a');  // Démarrer la récursion avec 'a'
}
