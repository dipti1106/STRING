#include <stdio.h>
int main()
{
   int boiling_point;
   
   printf("Enter a number: ");
   scanf("%d", &boiling_point);
   
   if (boiling_point >= 100)
   {
      printf("It is boiling point");
   } 
   else
   {
      printf("It is not boiling point");
   }
   
   return 0;
}

      
