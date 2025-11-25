#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
int justrepeat();
int oddnumbers();


int justrepeat(){
char arr[MAX_LENGTH];
    fgets(arr, sizeof(arr), stdin);
    printf("%s", arr);
    return 1;
}

int oddnumbers(){
    int odd;
    printf("the number, bitch?! ");
    scanf("%d", &odd);
    if(odd < 2){
        return 0;
    }
    for(int i = 1; i <= odd; ++i){
        printf("%d", i);
        if(i =! 1 && i != odd){
        return 0;
        }
    }
    return 1;
}


int main (){
int n;
int m = 1;
    printf("repeat: 1\noddnumbers: 2\n");
    scanf("%d", n);
    if(n < 1 || n > 2){
        return 1;
    }
    if(n == 1){
        justrepeat();
    } else if(n == 2){
        m = oddnumbers();
    }

    if(m == 0){
        printf("odd like your mom");
    }else{
        printf("ur safe beatch");
    }
    return 0;
}
