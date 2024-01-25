#include <stdio.h>

int esercizio1 () {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b == 0) {
        printf("%d e' multiplo di %d\n", a, b);
    } else if (b % a == 0) {
        printf("%d e' multiplo di %d\n", b, a);
    } else {
        printf("I due numeri non sono multipli tra loro.\n");
    }

    return 0;
}

char esercizio2 () {
    char char1, char2;

    scanf("%c", char1);
    scanf("%c", char2);

    if(char1 == char2 + 1){
        printf("i caratteri 'a' e 'b' sono uno il successivo dell'altro");
    } else if(char2 == char1 + 1){
       printf("i caratteri 'a' e 'b' sono uno il successivo dell'altro");
    } else {
    printf("non lo sono");
    }
    return 0;
}

int esercizio3 () {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a){
        printf("numeri invalidi.");
    return 1;
}

    if(a == b && b == c){
        printf("E' equilaterale.");
    } else if(a != b && b == c){
        printf("E' isoscele.");
    } else if(a != b && b != c){
        printf("E' scaleno.");
    }
return 0;
}

int main(){

}