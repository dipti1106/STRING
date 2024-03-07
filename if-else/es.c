#include<stdio.h>

int main() {
  int a,b;
 
  printf("enter a number: ");
  scanf("%d%d",&a,&b);
  
  if (a==b) 
  {
     printf("both are equal");
  } 
  else if (a<b)
  {
    printf( "a is smaller number");
  } else 
  {
    printf("b is smallest number");
  }
  return 0;
}  
