#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int sum = 0;
    int num;

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    double average = (double)sum / n;

    printf("Sum: %d", sum);
    printf("Average: %.2lf", average);

    return 0;
}

