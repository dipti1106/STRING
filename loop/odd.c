#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);

        if (i % 2 == 0) {
            sum1 += i;
            printf("even number\n");
        } else {
            sum2 += i;
            printf("odd number\n");
        }
    }

    printf("Sum of even numbers: %d\n", sum1);
    printf("Sum of odd numbers: %d\n", sum2);

    return 0;
}

   
   
