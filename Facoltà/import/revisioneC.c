#include <stdio.h>
#include <string.h>
/*Scrivere un programma in linguaggio C
che legga da tastiera una sequenza di numeri
positivi e ad ogni numero letto ne stampi la
somma progressiva. Il programma termina quando
si introduce un numero minore o uguale a zero.*/
int att1(){
int val, val1 = 0;
    do{
    scanf("%d", &val);
    if(val <=0){
        printf("final value: %d\n", val1);
        break;
    }
    val1 += val;
    printf("%d\n", val1);
    } while (val);
    return 0;
}
/* Scrivere un programma in linguaggio C che legga
da tastiera una sequenza di lunghezza ignota a
priori di numeri interi positivi. Il programma,
a partire dal primo numero introdotto, stampa ogni
volta la media di tutti i numeri introdotti.
Terminare quando il numero inserito è negativo.*/
int att2(){
    int val, med = 0, cont = 0;
    do{
    scanf("%d", &val);
    if(val <=0){
        med /= cont;
        printf("media: %d\n", med);
        break;
    }
    med += val;
    cont++;
    } while (val);
    return 0;
}
/*Si scriva un programma in linguaggio C che
legga da tastiera un numero intero A, lo riduca
ad un valore compreso tra 0 e 127 mediante sottrazione
ripetuta di un adeguato numero di volte del valore
128 (non si utilizzi l’operatore modulo o and), lo
interpreti come caratteri ASCII e lo stampi sul video.*/
int att3(){
    int A;
    scanf("%d", &A);
    if(A > 127){
        do{
        A -= 128;
            
        }while(A > 127);
    }else if(A < 0){
        printf("Numero non valito.");
        return 1;
    }
    printf("%d", A);
return 0;
}

int main(){

att3();

return 0;
}


