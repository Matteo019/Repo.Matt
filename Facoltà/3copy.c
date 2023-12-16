#include <stdio.h>

// Funzione per verificare se un numero è primo
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 e 1 non sono numeri primi
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0; // Il numero non è primo
        }
    }
    return 1; // Il numero è primo
}

int main() {
    int numero;
    int contatorePrimi = 0;

    printf("Inserisci una sequenza di numeri (termina con 0):\n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            if (isPrime(numero)) {
                contatorePrimi++;
            }
        }
    } while (numero != 0);

    printf("Numero totale di numeri primi nella sequenza: %d\n", contatorePrimi);

    return 0;
}






