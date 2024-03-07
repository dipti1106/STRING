#include <stdio.h>
int main() 
{
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if (num % 7 == 0) 
  {
     printf("Divisible by 7");
  } 
  else 
  {
     printf("Not divisible by 7");
  }
  
  return 0;
}

