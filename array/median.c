#include <stdio.h>

double findMedian(int arr[], int size) {
    if (size % 2 == 0) {
        int mid1 = size / 2 - 1;
        int mid2 = size / 2;
        return (double)(arr[mid1] + arr[mid2]) / 2.0;
    } else {
        int mid = size / 2;
        return (double)arr[mid];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    double median = findMedian(arr, size);

    printf("Median of the sorted array is %.2lf\n", median);

    return 0;
}

