#include <stdio.h>

int main() {
    float cp, sp;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        float profit = sp - cp;
        float profitPercentage = (profit / cp) * 100;
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    } else if (cp > sp) {
        float loss = cp - sp;
        float lossPercentage = (loss / cp) * 100;
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

  
