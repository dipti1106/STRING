#include <stdio.h>
int main()
{
  int num;
  
  printf("enter a number: ");
  scanf("%d", &num);
  
  if  (num % 5 == 0)
  {
     printf("Hellow");
  }
  else
  {
     printf("Bye");
  }
  
  return 0;
}
