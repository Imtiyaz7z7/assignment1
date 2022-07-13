#include <stdio.h>
int main() {
   int h,m;
   printf("Enter the time (HH:MM): ");
   scanf("%d:%d",&h,&m);
   printf("%d hours and %d Minute",h,m);
   return 0;
}