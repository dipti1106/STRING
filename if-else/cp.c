#include <stdio.h>

int main() {
    float cp, sp;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    // Calculate profit and profit percentage
    float profit = sp - cp;
    float profitPercentage = (profit / cp) * 100;
    
    // Print profit percentage
    printf("Profit Percentage: %.2f%%\n", profitPercentage);

    return 0;
}

