#include <stdio.h> 

int main () {

    int qualquecoisa[2][3] = {{1, 3, 6},{2, 4, 5}};

                printf("%d\n", qualquecoisa[1][1]);
             printf("%d\n", qualquecoisa[0][0]);
       

     int outracoisa[][3] = {{1, 3, 6},{2, 4, 5}};
       
       for(int a = 0; a < 2; a++) {
            for(int b = 0; b < 3; b++) {
                printf("%d\t", outracoisa[a][b]);
            }
       }

 return 0;

}