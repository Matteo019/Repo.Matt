#include <stdio.h>
#include <string.h>
int sott1, element1, element2, n;

int sotto1(int sott1){
    int fatoriale = sott1;
    n = 1;

for(int i = 1; i <= fatoriale; ++i){
    n *= i;
}
}

int sotto2(int element1, int element2){
//coefficiente binomiale
sotto1(element1);
printf("%d", n);
sott1 = element1;
sotto1(sott1);
printf("%d", n);
}

int main(void){
    //1
    printf("1. insert\n");
    scanf("%d", &sott1);
    sotto1(sott1);
    printf("il fatt = %d", n);
    //2
    printf("2. insert\n");
    scanf("%d %d",&element1, &element2);
    sotto2(element1 , element2);
return 0;
}