#include <stdio.h>

int main()
{
   int i;
   char four_planets[][8] = {"mercury", "venus", "Earth", "mars"};

   for (i = 0; i < 4; i++)
   {
      if (four_planets[i][0] == 'm' || four_planets[i][0] == 'M')
      {
         printf("%s begins with M\n", four_planets[i]);
      }
   }

   return 0;
}

