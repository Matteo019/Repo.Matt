#include <stdio.h> 

int main () {
int a = 1;
  for (int a = 1; a <= 100; a++) //it's going to print 1, 2, 3, 4, 5, 6, 7, ... 100
  {
  if (a % 3 == 0 && a % 5 == 0) //it's going to print FizzBuzz for numbers that are divisible for 3 and 5
  {
    printf("FizzBuzz\n");
  continue;
} else if (a % 5 == 0) //it's going to print Buzz for numbers that are divisible for 5
{
    printf("Buzz\n");
  continue;
} else if (a % 3 == 0) //it's going to print Fizz for numbers that are divisible for 3
{
    printf("Fizz\n");
  continue;
}
  printf("%d\n", a);
}
}