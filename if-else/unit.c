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
      bill = (50 * 0.50) + (100 * 0.75) + (unit - 150) * 1.20;  // Corrected the calculation
   }
   else
   {
      bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (unit - 250) * 1.50;  // Corrected the calculation
   }
   
   if (bill > 300)
   {
       subcharge = bill * 0.15;  // Calculate subcharge
       bill += subcharge;  // Add subcharge to the bill
   }
   
   printf("Total bill: %.2f", bill);  // Print the total bill
   
   return 0;
}

