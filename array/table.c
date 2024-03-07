#include <stdio.h>

int main() {
    int a[10], m = 0;

    printf("Enter array elements: ");
    int i;
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\tTable print\n");  
    for (i = 0; i < 5; i++) {
        m = a[i] * i; 
        printf("%d ", m);
    }
    return 0;
}

