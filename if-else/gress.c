#include <stdio.h>

int main() {
    float basicSalary, hra, da, grossSalary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Output the results
    printf("Basic Salary: %.2f", basicSalary);
    printf("HRA: %.2f", hra);
    printf("DA: %.2f", da);
    printf("Gross Salary: %.2f", grossSalary);

    return 0;
}

