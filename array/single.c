#include <stdio.h> 

int main() {
    int arr1[] = {1, 3, 5, 7};
    int m = 4;

    int arr2[] = {2, 4, 6, 8};
    int n = 4;

    int result[8];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged Sorted Array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

