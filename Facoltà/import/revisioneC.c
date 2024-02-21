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
    char B;
    scanf("%d", &A);
        while(A > 127){
        A -= 128;
        }
    if(A < 0){
        printf("Numero non valito.");
        return 1;
    }
    B = A;
    printf("%c", B);
return 0;
}
/*Scrivere un programma in C per la
rappresentazione del triangolo di Floyd.
Il triangolo di Floyd è un triangolo rettangolo
che contiene numeri naturali, definito riempiendo
le righe del triangolo con numeri consecutivi e
partendo da 1 nell’angolo in alto a sinistra. Si consideri ad
esempio il caso N=5. Il triangolo di Floyd e’ il seguente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Il programma riceve da tastiera un numero intero N.
Il programma visualizza le prime N righe del
triangolo di Floyd. Suggerimento. Si osserva che il
numero di valori in ogni riga corrisponde
all’indice della riga: 1 valore sulla prima riga,
2 sulla seconda, 3 sulla terza.*/
int att4(int input){
    //cifre.
    
    int divisor = 1, num = input;

    while(divisor < num){
        divisor *= 10;
        if(divisor > num){
        divisor /= 10;   
            break;
        }
    }
    printf("%d\n", divisor);
    while (divisor >= 1){
            int digit = (num / divisor) % 10;
            printf("%d", digit);
    
        if(divisor > 1){
            printf(" ,");
        }
        divisor /= 10;
    }
    
}
  
int main(){

    int input;
    scanf("%d", &input);
    att4(input);

return 0;
}


