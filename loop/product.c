#include <stdio.h>
int main() 
{
    int n;
    long long product = 1;
    printf("Enter the number of integers you want to multiply: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid positive integer for 'n'.\n");
    } else {
       
        for (int i = 0; i < n; i++)
        {
            int num;
            printf("Enter integer %d: ", i + 1);
            scanf("%d", &num);
            product *= num;
        }
        printf("The product of the %d integers is: %lld\n", n, product);
    }

    return 0;
}


