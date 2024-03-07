#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2) {
    int merged[size1 + size2];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            merged[k++] = arr2[j++];
        } else { 
            merged[k++] = arr1[i++];
            j++;
        }
    }

    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 6, 7, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeSortedArrays(arr1, size1, arr2, size2);

    return 0;
}

