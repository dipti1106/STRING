#include <stdio.h>

int main() {
  int a[10], temp = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 10 - 1; i++) { 
    for (int j = 0; j < 10 - 1 - i; j++) { 
      if (a[j] > a[j + 1]) { 
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", a[i]);  
  }
  
  return 0;
}

