#include <stdio.h>
int main() {
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %d\n", n, factorial);
    }

    return 0;
}

