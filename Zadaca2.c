#include <stdio.h>

void prosti(int n, int a[]) {
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i*i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
}

int main() {
    int n;
    printf("Vnesi broj na elementi: ");
    scanf("%d", &n);

    int a[n+1];
    for (int i = 0; i <= n; i++) {
        a[i] = 1;
    }

    prosti(n, a);

    printf("Prosti broevi do %d se: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
