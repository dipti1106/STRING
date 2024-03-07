#include <stdio.h>
#include <string.h>

int main()
{
   char city[20]; // Using a string to store the city name
   
   printf("Enter a city: ");
   scanf("%s", city);
   
   if (strcmp(city, "Delhi") == 0)
   {
      printf("Red Fort");
   }
   else if (strcmp(city, "Agra") == 0)
   {
      printf("Taj Mahal");
   }
   else if (strcmp(city, "Jaipur") == 0)
   {
      printf("Jal Mahal");
   }
   else
   {
      printf("Otherwise");
   }
   
   return 0;
}

   
