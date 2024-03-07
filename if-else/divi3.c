#include <stdio.h>
int main()
{
   int num;
   
   printf("Enter a number: ");
   scanf("%d", &num);
   
   if (num % 3 ==0)
   {
      printf("divisible by 3");
   }
   else
   {
      prinf("Divisible by 3");
   }
   
   return 0;
}
