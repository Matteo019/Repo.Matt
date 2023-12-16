#include <stdio.h>

int main () {

 int b = 7;
 int a;

  printf("Enter a number that you want:");
  scanf("%d", &a);

    if(a > 7){
    a %= b;
    printf("today is the %drd day of the week", a);
}else if(a <= b && a > 1){
    printf("today is the %drd day of the week", a);
}else{
    printf("You need to insert a number bigger than 0");
}

}
