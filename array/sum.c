#include <stdio.h>

int main() {
    int a[10], sum = 0, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Error:elements should not exceed 10\n");
        return 1; 
    }
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}

