#include <stdio.h>

int main () {

 int b = 7;
 int a;

  printf("Enter a number that you want:");
  scanf("%d", &a);

do{
 if(a > b){
    a %= b;
    printf("today is the %drd day of the week", a);

}else if((a %= b) == 0){
    printf("today is the 1 day of the week");
}
}
while(a == 0);
    printf("try again");
return 0;
}