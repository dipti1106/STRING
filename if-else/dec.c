#include <stdio.h>
int main()
{
  int num;
  
  printf("enter a number");
  scanf("%d", &num);
  
  if (num % 4 == 0)
  {
     printf("incriment");
  }
  else
  {
     printf("decriment");
  }
  
  return 0;
}
