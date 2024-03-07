#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    while (num != 0) {
        numDigits++;
        num /= 10;
    }

    num = originalNum;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    if (start < 0 || end < start) {
        printf("Invalid range.\n");
        return 1;
    }

    int armstrongNumbers[100]; // Assuming you won't have more than 100 Armstrong numbers
    int count = 0;

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            armstrongNumbers[count] = i;
            count++;
        }
    }

    if (count == 0) {
        printf("No Armstrong numbers found in the range [%d, %d].\n", start, end);
    } else {
        printf("Armstrong numbers in the range [%d, %d]: ", start, end);
        for (int i = 0; i < count; i++) {
            printf("%d ", armstrongNumbers[i]);
        }
        printf("\n");
    }

    return 0;
}

