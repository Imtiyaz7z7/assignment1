#include <stdio.h>
int main() {
   char a[100];
   printf("What is your name:\n");
   scanf("%s",&a);
   printf("Hello, %s",a);
   return 0;
}