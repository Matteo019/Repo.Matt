#include <stdio.h>

void odd(int e){

    if((e/2)* 2 == e){
       printf("%d is even", e);
    }else{
       printf("%d is odd", e);
    }

}
int main (void){
 
    int e;
    scanf("%d", &e);
    odd(e);

    return 0;
}