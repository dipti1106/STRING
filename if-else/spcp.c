#include <stdio.h>

int main() {
  int sp, cp;

  printf("enter selling price: ");
  scanf("%d", &sp);
  
  printf("enter cost price: ");
  scanf("%d", &cp);

  if (sp == cp) {
    printf("no profit, no loss");
  } else if (sp > cp) {
    printf("profit");
  } else {
    printf("loss");
  }

  return 0;
}

    
