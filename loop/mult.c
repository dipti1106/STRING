#include <stdio.h>
int main()
{
   int n, r;
   printf("Enter a number: ");
   scanf("%d", &n);
   int mult = 5;
   
   for (int i = 1; i <= n; i++)
   {
     r = i % 7 == 0;
     mult = mult * i;
     printf("%d", mult);
    }
    
    return 0;
}
