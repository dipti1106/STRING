#include <stdio.h>
int main()
{
  int age;
  
  printf("enter a number");
  scanf("%d", &age);
  
  if (age >= 60 )
  {
     printf("senior citizen");
  }
  else 
  {
     printf("jonior citizen");
  }
  
  return 0;
}
