#include <stdio.h>

int main() {
    int num;
    unsigned long long fact = 1; 
    double sum = 0; 
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        fact *= i;
        sum += 1.0 / i; 
    }
    
    printf("Factorial series: %llu\n", fact);
    printf("Sum of reciprocals: %lf\n", sum);
    
    return 0;
}

