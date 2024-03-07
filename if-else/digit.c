#include <stdio.h>
int main()
{
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if (num<0 & num>=9)
  {
      printf("one digit number");
  }
  else if (num<=10 & num>=99)
  {
      printf("two digit number");
  }
  else (num<=100 & num>=999);
  {
   printf("more than three digit number");
  }
   
   return 0;
}
   
