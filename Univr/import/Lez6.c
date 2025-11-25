#include <stdio.h>

/*Scrivere un programma C che chiede all'utente 5 valori interi non
negativi e ne disegna l'istogramma a barre verticali come mostrato
nel seguente esempio.
Se l'utente inserisce i valori: 1 4 5 2 1, il programma visualizzerà
il seguente output:
    *
  * *
  * *
  * * *
* * * * *
1 4 5 2 1*/

int lez1 (){
int cont = 0, val[5], var[5];

//assign val[i]
    for(int i = 0; i < 5; i++){
        scanf("%d", &val[i]);
        var[i] = val[i];
        if(val[i] < 0){
            break;
        }
    }
    int mapping[] = {5, 4, 3, 2, 1, 0};

    for (int i = 0; i < 5; i++) {
    if (val[i] >= 0 && val[i] <= 5) {
        val[i] = mapping[val[i]];
    }
}
//the stars
     for (int i = 0; i < 5; ++i) {
        int j = 0;
        do{
            do{
                if (val[j] > 0) {
                printf("  ");
                val[j] -= 1;
                cont++;
            } else {
                printf("* ");
                cont++;
            }
            j++;
            }while(j < 5);
        }while (cont < 5);
        printf("\n");
        cont = 0;
    }
        for (int i = 0; i < 5; i++) {
        printf("%d ", var[i]);
    }
    return 0;
}


    int main(){

        lez1();

    return 0;
    }






