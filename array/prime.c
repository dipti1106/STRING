#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a[10];
    int i;
    
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Prime numbers in the array: ");
    for (i = 0; i < 10; i++) {
        if (isPrime(a[i])) {
            printf("%d ", a[i]);
        }
    }
    
    printf("\n");

    return 0;
}

