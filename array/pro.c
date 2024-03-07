#include <stdio.h>

int main() {
   int a[10], product = 1;
   
   printf("Enter 10 elements: ");
   
   for(int i = 0; i < 10; i++) {
       scanf("%d", &a[i]);
       product = product * a[i];
   }
   
   printf("\nProduct in the array: ");
   
   for (int i = 0; i < 10; i++) {
       printf("%d ", product);
   }
   
   return 0;
}

