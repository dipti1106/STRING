#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int sum = 0;

   for (int i = 1; i <= n; i++) {
       int num;
       scanf("%d", &num);
       sum += num; 
   }

   double average = (double)sum / n; 

   printf("The average is: %.2lf\n", average); 

   return 0;
}

