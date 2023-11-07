#include <stdio.h>

int main() {

//Values input
double yourWeight;
int nOfPlanet;

//Numeration of the planets
int mercury = 1;
int venus = 2;
int mars = 3;
int jupiter = 4;
int saturn = 5;
int uranus = 6;
int neptune = 7;

//Questions for Input
printf("What is your weight in earth?\n");
  scanf("%lf", &yourWeight);

printf(" 1	Mercury	0.38 \n 2	Venus	0.91 \n 3	Mars	0.38\n 4	Jupiter	2.34\n 5	Saturn	1.06\n 6	Uranus	0.92\n 7	Neptune	1.19 \n \n Please, insert the number of the planet you want to fight against:\n");
  scanf("%d", &nOfPlanet);
//Calculation of the weight
switch(nOfPlanet) {
  case 1:
    yourWeight *= 0.38;
    printf("your weight in %d will be %.2f!\n", mercury, yourWeight);
    break;
  case 2:
    yourWeight *= 0.91;
    printf("your weight in %d will be %.2f!\n", venus, yourWeight);
    break;
  case 3:
    yourWeight *= 0.38;
    printf("your weight in %d will be %.2f!\n", mars, yourWeight);
    break;
  case 4:
    yourWeight *= 2.34;
    printf("your weight in %d will be %.2f!\n", jupiter, yourWeight);
    break;
  case 5:
    yourWeight *= 1.06;
    printf("your weight in %d will be %.2f!\n", saturn, yourWeight);
    break;
  case 6:
    yourWeight *= 0.92;
    printf("your weight in %d will be %.2f!\n", uranus, yourWeight);
    break;
  case 7:
    yourWeight *= 1.19;
    printf("your weight in %d will be %.2f!\n", neptune, yourWeight);
    break;
  default:
	  printf("Unknown number, please try again\n");
  break;
}

}