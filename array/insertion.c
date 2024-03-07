#include <stdio.h>

int main() {
    int a[10];
    int d[10];
    int c = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                int D = 0;
                for (int k = 0; k < c; k++) {
                    if (d[k] == a[i]) {
                        D = 1;
                        break;
                    }
                }
                if (!D) {
                    d[c] = a[i];
                    c++;
                }
            }
        }
    }
    for (int i = 0; i < c; i++) {
        printf("%d ", d[i]);
    }

    return 0;
}

