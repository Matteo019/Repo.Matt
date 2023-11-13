#include <stdio.h>
#include <string.h>

int main (void){
//2.
int counter1[] = {0, 0, 0, 0};
int counter2[] = {0, 0, 0, 0};
//3.
char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
//4. AND 5.
    for (int size = 0; strlen(s1); size++) {
     if (s1[size] == 'a'){
      counter1[0]++;
     }
     if (s1[size] == 'b'){
      counter1[1]++;
     }
     if (s1[size] == 'd'){
      counter1[2]++;
     }
     if (s1[size] == 'd'){
      counter1[3]++;
     }
  }
  //6.
    for (int size2 = 0; strlen(s2); size2++) {
     if (s2[size2] == 'a'){
      counter2[0]++;
     }
     if (s2[size2] == 'b'){
      counter2[1]++;
     }
     if (s2[size2] == 'd'){
      counter2[2]++;
     }
     if (s2[size2] == 'd'){
      counter2[3]++;
     }
  }
  //7. 9.
  int flag;
  if (counter1 == counter2){
    flag = 0;
  }else if (counter1 != counter2){
    flag = 1;
  }
//8.
/*for (){

} */
//10.
if (flag == 0){
  printf("Anagram!");
}else{
  printf("Not Anagram!");
}
  }