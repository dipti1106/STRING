#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int perfectNumbers[100]; 
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (isPerfect(i)) {
            perfectNumbers[count] = i;
            count++;
        }
    }

    if (count == 0) {
        printf("No perfect numbers found up to %d.\n", n);
    } else {
        printf("Perfect numbers up to %d: ", n);
        for (int i = 0; i < count; i++) {
            printf("%d ", perfectNumbers[i]);
        }
        printf("\n");
    }

    return 0;
}

