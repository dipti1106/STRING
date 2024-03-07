#include <stdio.h>
int main()
{
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if (num % 5 == 0)
  {
     printf("divisible by 5");
  }
  else if (num % 11 == 0)
  {
     printf("divisiable by 11");
  }
  else if (num % 5 == 0 || num % 11 == 0)
  {
     printf("both are divisible");
  }
  else
  {
     printf("not divisible");
  }
  
  return 0;
}
