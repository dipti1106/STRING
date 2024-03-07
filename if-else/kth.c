#include <stdio.h>
#include <math.h>
int main()
{
    int N, k;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += pow(i, k);
    }

    printf("The sum of the %dth power of the first %d natural numbers is: %d", k, N, sum);

    return 0;
}

 
