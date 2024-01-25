#include <stdio.h>

int esercizio1(){
    int n[15];
    int media = 0;

    for(int i = 0; i < 15; i++){
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < 15; i++){
        media += n[i];
    }
    printf("%d", media);
}

int esercizio2 () {
    int a;

    do{
        scanf("%d", &a);
    } while (a <= 1);

int primo;

    while (1) {
        primo = 1;
    
        for(int i = 2; i * i <= a; i++){
            if(a % i == 0) {
                primo = 0;
                break;
            }
        }

        if(primo){
            printf("numero primo.\n");
                break;
        } else {
            scanf("%d", &a);
        }
    }
}

int esercizio3 () {
    int a;
    int z = 0;
    double b, media = 0.0;

    do{
        z++;
        scanf("%d", &a);
        b = a;
        media += b;
    } while(a != 0);
    if(media == 0.0){
        printf("Errore.");
        return 0;
    }
    z--;
    media /= z;
    printf("la media e': %0.1f", media);
}

int esercizio4 () {
    int a[10];
    int cont = 0, pari = 0, dispari = 0;

    while(cont < 10){
        scanf("%d", &a[cont]);
        if(a[cont] == -1){
            break;
        }
        if(a[cont] <= 0){
            printf("Valore rifiutato.\n");
            return 1;
        }
        cont++;
    }
        cont--;

        while(cont >= 0){
            if(a[cont] % 2 == 0){
                pari++;
            } else {
                dispari++;
            }
        cont--;           
        }
        printf("ci sono %d pari e %d dispari.\n", pari, dispari);
    }

int main () {

    esercizio4();
    return 0;
}



