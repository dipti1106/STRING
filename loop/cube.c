#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("Enter a Number: ");
  scanf("%d", &n);
  int sum = 0;

  for (int i = 1; i <= n; i++)
  {
    sum += pow(3, i);
  }

  printf("The sum of powers of 3 from 3^1 to 3^%d is: %d\n", n, sum);

  return 0;
}

