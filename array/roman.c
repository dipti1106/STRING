#include <stdio.h>

void decimalToRoman(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (num <= 0 || num >= 4000) {
        printf("Roman numerals can't represent the given number.\n");
        return;
    }

    printf("Roman numeral equivalent of %d is: ", num);

    for (int i = 0; num > 0; i++) {
        int count = num / decimal[i];
        num %= decimal[i];
        
        for (int j = 0; j < count; j++) {
            printf("%s", roman[i]);
        }
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decimalToRoman(num);

    return 0;
}

