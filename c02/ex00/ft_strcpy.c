#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, unsigned int n) {
    unsigned int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
int main() {
    char src[] = "Hello, World!";
    char dest[50];

    ft_strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Source: %s\n", src);
    printf("Destination (n=5): %s\n", dest);
    for (int i = 0; i < 50; i++) {
        dest[i] = '\0';
    }
    ft_strncpy(dest, src, 20);
    printf("Destination (n=20): %s\n", dest);
    return (0);
}
