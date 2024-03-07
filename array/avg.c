#include <stdio.h>

int main() {
   int a[10], s = 0, n = 10, average;
   
   printf("Enter array elements: ");
   for (int i = 0; i < 10; i++) {
     scanf("%d", &a[i]);
   }
   
   printf("\nAverage of array elements: ");
   for (int i = 0; i < 10; i++) {
     s = s + a[i];
   }
   average = s / n;
   printf("%d", average);

   return 0;
}

