#include <stdio.h>
int main()
{
  int N;
  
  printf("Enter a number: ");
  scanf("%d", &N);
  
  if (N / 3 == 0)
  {
     printf("end with 3");
  }
  else if (N % 7 == 0)
  {
     printf("end with 7");
  }
  else
  {
    printf("num itself");
  }
  
  return 0;
}
