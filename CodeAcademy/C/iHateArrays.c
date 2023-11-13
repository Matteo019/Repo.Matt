#include <stdio.h> 

int main () {

    int qualquecoisa[2][3] = {{1, 3, 6},{2, 4, 5}};

                printf("%d\n", qualquecoisa[1][1]);
             printf("%d\n", qualquecoisa[0][0]);
       

     int numbers[][3] = {{1, 3, 6},{2, 4, 5}};

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);


        printf("rows: %d\n", rows);
        printf("columns: %d\n", columns);

       for(int a = 0; a < 2; a++) {
            for(int b = 0; b < 3; b++) {
                printf("%d ", numbers[a][b]);
            }
            printf("\n");
       }

    




 return 0;

}