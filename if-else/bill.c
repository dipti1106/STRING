#include <stdio.h>
int main()
{
   int unit;
   float bill, subcharge;  // Use float for bill and subcharge
   
   printf("Enter units consumed: ");
   scanf("%d", &unit);
   
   if (unit <= 50)
   {
      bill = unit * 0.50;
   }
   else if (unit <= 150)
   {
      bill = (50 * 0.50) + (unit - 50) * 0.75;  // Corrected the calculation
   }
   else if (unit <= 250)
   {
      bill = (50 * 0.50) + (100 *

