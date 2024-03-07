#include <stdio.h>

int isValidDate(int month, int day) {
    if (month >= 1 && month <= 12) {
        if ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)) {
            return 1;
        } else if (month != 2 && (day >= 1 && day <= 31)) {
            return 1;
        } else if (month == 2 && (day >= 1 && day <= 28)) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

int main() {
    int month, day;
    printf("Enter month and day: ");
    scanf("%d %d", &month, &day);

    if (isValidDate(month, day)) {
        printf("Date is valid");
    } else {
        printf("Date is not valid");
    }

    return 0;
}

