/* #include <stdio.h>


int main() {
    int n;
    
    scanf("%d", &n);

    if (n < 0){
        return 0;
    }
    while (n > 0){
        int cifra = n % 10;
        int rip = cifra;

        for (int i = 0; i < rip; ++i){
            printf("%d ", cifra);
        }
        n /= 10;
    }
   printf ("\n");

    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    // Input dell'intero positivo da tastiera
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Il numero inserito non è positivo.\n");
        return 1;
    }

    // Calcolo del numero di cifre nel numero
    int temp = numero;
    int numCifre = 0;
    while (temp > 0) {
        temp /= 10;
        numCifre++;
    }

    // Allocazione dinamica dell'array per le cifre
    int *cifre = (int *)malloc(numCifre * sizeof(int));

    // Riempimento dell'array con le cifre
    int index = 0;
    while (numero > 0) {
        cifre[index] = numero % 10;  // Estrae l'ultima cifra
        numero /= 10;
        index++;
    }

    // Stampa le cifre ripetute un numero di volte pari al loro valore
    for (int i = numCifre - 1; i >= 0; i--) {
        int ripetizioni = cifre[i];

        // Stampa la cifra ripetuta
        for (int j = 0; j < ripetizioni; ++j) {
            printf("%d", cifre[i]);
        }

        // Spazio tra le cifre, tranne per l'ultima cifra
        if (i > 0) {
            printf(" ");
        }
    }

    // Deallocazione dell'array delle cifre
    free(cifre);

    printf("\n");

    return 0;
}








