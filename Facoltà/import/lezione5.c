#include <stdio.h>


int esercizio2() {
    int size, cont = 0;

    scanf("%d", &size);

    int val[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &val[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", val[i]);
    }
    printf("\n");

    for (int i = 0; i < size; ++i) {
        int j = 0;
        do{
            do{
                if (val[j] > 0) {
                printf("* ");
                val[j] -= 1;
                cont++;
            } else {
                printf("  ");
                cont++;
            }
            j++;
            }while(j < size);
        }while (cont < size);
        printf("\n");
        cont = 0;
    }

    return 0;
}
int main () {
    esercizio2();

return 0;
}