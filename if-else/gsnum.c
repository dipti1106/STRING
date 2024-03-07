#include <stdio.h>
int main()
{
  int a, b;
  
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  
  if (a > b)
  {
     printf("Sum: %d", a + b);
  }
  else
  {
     printf("Difference: %d", a - b);
  }
  
  return 0;
}

