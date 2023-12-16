#include <stdio.h>


int numeriprimi (int n){

    if (n <= 1){
        return 0;
    }
    for(int i = 2; i * i <= n; ++i){
        if (n % i == 0) {
            return 0;
         } 
    } return 1;
}
int main() {
    int n;
    int primo = 0;

    printf("Inserisci una sequenza di numeri (termina con 0):\n");

    do {
        scanf("%d", &n);

        if (n != 0) {
            if (numeriprimi(n)) {
                primo++;
            }
        }
    }while (n != 0);

    printf("Numero totale di numeri primi nella sequenza: %d\n", primo);

    return 0;
}





