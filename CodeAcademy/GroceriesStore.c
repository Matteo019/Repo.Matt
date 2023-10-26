#include <stdio.h>

int main() {
  float applePrice = 1.49;
  int appleQuantity = 23;
  char appleLocation = 'F';
  float appleReview = 82.5;
  int appleReviewDisplay = 82;
  const char APPLELOCATION = 'F';
  appleReview = (int)appleReviewDisplay;

 //Why it's working??????
 
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
