#include <stdio.h>

int main() {
    float costPrice, tax;

    printf("Enter the cost price of the bike (in Rs): ");
    scanf("%f", &costPrice);

    if (costPrice > 100000) {
        tax = costPrice * 0.15;
    } else if (costPrice > 50000 && costPrice <= 100000) {
        tax = costPrice * 0.10;
    } else {
        tax = costPrice * 0.05;
    }

    printf("Road tax to be paid: Rs %.2f", tax);

    return 0;
}

