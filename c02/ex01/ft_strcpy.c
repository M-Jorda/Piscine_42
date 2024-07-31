#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, unsigned int n) {
    unsigned    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) 
    {
        dest[i] = src[i];
    }
    for ( ; i < n; i++) 
    {
        dest[i] = '\0';
    }
    return (dest);
}
int main() {
    char    src[] = "Hello, World!";
    char    dest[50];

    ft_strncpy(dest, src, 5);
    printf("Source: %s\n", src);
    printf("Destination (n=5): %s\n", dest);
    ft_strncpy(dest, src, 20);
    printf("Destination (n=20): %s\n", dest);
    return (0);
}
