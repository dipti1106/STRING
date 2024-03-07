#include <stdio.h>
int main()
{
 int num;
 
 printf("Enter a number: ");
 scanf("%d", &num);
 
 if (num>0)
 {
    printf("num is positive");
 }
 else if (num<0)
 {
    printf("num is nagtive");
 }
 else
 {
    printf("num is zero");
 }
 
 return 0;
}
