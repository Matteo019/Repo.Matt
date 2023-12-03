#include <stdio.h>
#include <stdbool.h>

int yy, mm, dd, days_left_to_add, sorry, year;
int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap_year(int year) {
  if (year % 4 != 0) {
    return false;
  } else if (year % 100 != 0) {
    return true;
  } else if (year % 400 != 0){
    return false;
  } else {
    return true;
  }
}

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){
  int days_left_in_month;
while (days_left_to_add > 0) {
   days_left_in_month = days_in_month[*mm] - *dd;
   if (*mm == 2 && is_leap_year(*yy)) {
    days_left_in_month++;
  }
 if (days_left_to_add >= days_left_in_month) {
  days_left_to_add -= days_left_in_month;
  *dd = 1;
  days_left_to_add--;
  if (*mm != 12) {
    *mm = *mm + 1;
  } else {
    *mm = 1;
    *yy = *yy + 1;
  }
    } else {
    *dd += days_left_to_add;
    days_left_to_add = 0; 
  }
    } 
    printf("%d %d %d\n", *mm, *dd, *yy);
}
    
  int Requisits(int* yy, int* mm, int* dd, int* sorry){
    
    if (*yy < 1800 || *yy > 10000){
    printf("please enter a valid number between 1800 and 10000 for the year\n");
    *sorry = *sorry + 1;
  }
   if (*mm < 1 || *mm > 12){
    printf("please enter a valid number between 1 and 12 for the month\n");
    *sorry = *sorry + 1;
  }
  if (*dd < 1 || *dd > 31){
    printf("please enter a valid number between 10 and 31 for the day\n");
    *sorry = *sorry + 1;
  }
}
 

int main() {

printf("Insert today's date as 'mm, dd, yy':\n");
  scanf("%02d %02d %05d", &mm, &dd, &yy);
  year = yy;
  is_leap_year(year);
  Requisits(&yy, &mm, &dd, &sorry);
  if(sorry == 0){

printf("Insert the numbers of day's that you want to add:\n");
      scanf("%05d", &days_left_to_add);

    add_days_to_date(&mm, &dd, &yy, days_left_to_add); 
  }
}