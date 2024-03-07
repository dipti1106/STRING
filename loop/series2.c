#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    long long sum = 0;
    long long term = 5;

    for (int i = 5; i < n; i++) {
        sum += term; 
        printf("%lld", term);

        if (i < n - 1) {
            printf(" + ");
        }

        term = term * 10 + 5;
    }

    printf(" = %lld\n", sum);

    return 0;
}

