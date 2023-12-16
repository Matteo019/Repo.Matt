#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 30

int isSubArray(const char *array1, const char *array2) {
    int len1 = strlen(array1);
    int len2 = strlen(array2);

    // Verifica se la lunghezza del secondo array è maggiore di quella del primo
    if (len2 > len1) {
        return 0;  // Il secondo array non può essere un sotto-array del primo
    }

    for (int i = 0; i <= len1 - len2; ++i) {
        // Verifica se i successivi len2 caratteri di array1 sono uguali a array2
        if (strncmp(array1 + i, array2, len2) == 0) {
            return 1;  // Il secondo array è un sotto-array del primo
        }
    }

    return 0;  // Il secondo array non è un sotto-array del primo
}

int main() {
    char array1[MAX_LENGTH + 1];
    char array2[MAX_LENGTH + 1];

    // Input del primo array
    printf("Inserisci il primo array di caratteri (max 30 caratteri): ");
    fgets(array1, sizeof(array1), stdin);
    array1[strcspn(array1, "\n")] = '\0';  // Rimuove il carattere newline

    // Input del secondo array
    printf("Inserisci il secondo array di caratteri (max 30 caratteri): ");
    fgets(array2, sizeof(array2), stdin);
    array2[strcspn(array2, "\n")] = '\0';  // Rimuove il carattere newline

    // Verifica se il secondo array è un sotto-array del primo
    if (isSubArray(array1, array2)) {
        printf("Il secondo array e' un sotto-array del primo.\n");
    } else {
        printf("Il secondo array non e' un sotto-array del primo.\n");
    }

    return 0;
}
