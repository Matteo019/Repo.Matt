#include <stdio.h>
//the code follow the repetition After the program runs
int dowhilef (void){
int i = 0;

    do{
        i++;
        printf("%d dowhile\n", i);
    }while(i < 10);    
}
//the code see the repetition and THEN start running.
int whilef (void){
int i = 0;

    while(i < 10){
            i++;
        printf("%d while\n", i);
    }        
}
//the code see the repetition and THEN start running.
int forf (void){
    for(int i = 1; i <= 10; i++){
        printf("%d for\n", i);
    }
}




int main (void){
int n;
printf("1 == for / 2 == while / 3 dowhile\n");
scanf("%d", &n);
    if(n < 1 || n > 3){
    return 1;
} 
    if(n == 1){
        forf();
    } else if(n == 2){
        whilef();
    } else if(n == 3){
        dowhilef();
    }
    return 0;
}