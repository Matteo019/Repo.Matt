 #include <stdio.h>

int main (){

int n;
int na = -1;

do {
    scanf("%d", &n);

    if(n == 0){
        break;
    }
    if(n <= na){
        printf("non è inc.");
        return 0;
    } 
    na = n;
} while (1);
    printf("è inc.");
    return 0;
}

