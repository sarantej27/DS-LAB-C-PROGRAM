#include <stdio.h>

int main() {
    char str[200];
    char *p;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    p = str;  
    while (*p != '\0') {
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
         if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' ||
                *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        p++; 
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
