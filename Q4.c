#include <stdio.h>
int main() {
   float r,A;
   printf("What is the radius of the circle:");
   scanf("%f",&r);
   A = 3.14*r*r;
   printf("Area of circle is %f having the radius %f",A,r);
   return 0;
}