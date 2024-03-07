#include <stdio.h>

int main() {
    int a[10];
    int unique[10];
    int c = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        int isUnique = 1; 
        for (int j = 0; j < 10; j++) {
            if (i != j && a[i] == a[j]) {
                isUnique = 0; 
                break; 
            }
        }

        if (isUnique) {
            unique[c] = a[i];
            c++;
        }
    }
    for (int i = 0; i < c; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

