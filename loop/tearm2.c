#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, sum = 0.0;

    
    printf("Enter the value of X: ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    int factorial = 1;
    int sign = 1;   
    for (int i = 1; i <= n; i++) {
        factorial *= (2 * i - 1) * (2 * i);  
        double term = pow(x, 2 * i - 1) / factorial;
        sum += sign * term;
        sign = -sign;  
    }
    
    printf("The sum of the series is: %.6f\n", sum);

    return 0;
}

