#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m = 6;
    int k = m

    // Reverse the first m/2 elements
    for (int i = 0; i < k; i++) {
        int temp = a[i];
        a[i] = a[k - 1 - i];
        a[k - 1 - i] = temp;
    }

    // Reverse the next m/2 elements
    for (int i = 0; i < k ; i++) {
        int temp = a[k + i];
        a[k + i] = a[m - 1 - i];
        a[m - 1 - i] = temp;
    } 

    // Print the result
    for (int i = 0; i < m; i++) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
         }

    return 0;
}
