#include <stdio.h>

int main() {
  float applePrice = 1.49;
  int appleQuantity = 23;
  char appleLocation = 'C';
  appleLocation = 'F';


  double appleReview;
  int appleReviewDisplay;
  appleReview = 82.5;
  appleReviewDisplay = appleReview;


 //Why it's working??????
 //Because i fixed it ;)

printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
