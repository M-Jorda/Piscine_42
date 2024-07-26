#include <unistd.h>  // Pour la fonction write()

void ft_is_negative(int n) {
    // Vérifier si n est négatif
    if (n < 0) {
        write(1, "N", 1);  // Afficher 'N' pour un nombre négatif
    } else {
        write(1, "P", 1);  // Afficher 'P' pour un nombre positif ou nul
    }
}
