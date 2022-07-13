#include <stdio.h>
int main() {
   int d,m,year;
   printf("Enter the date (dd/mm/yyyy): ");
   scanf("%d/%d/%d",&d,&m,&year);
   printf("Day - %d ,Month - %d ,Year - %d",d,m,year);
   return 0;
}