#include <unistd.h>  // Pour la fonction write()

// Fonction récursive pour afficher les lettres de 'z' à 'a'
void print_reverse_char(char c) {
    if (c < 'a') {
        return;  // Condition de terminaison : si le caractère est avant 'a', arrêter la récursion
    }
    write(1, &c, 1);  // Afficher le caractère courant
    print_reverse_char(c - 1);  // Appeler la fonction avec le caractère précédent
}

void ft_print_reverse_alphabet(void) {
    print_reverse_char('z');  // Démarrer la récursion avec 'z'
}
