#include <stdio.h>

void vnesiMatrica(int matrica[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Vnesi element za matrica[%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }
}

void pechatiMatrica(int matrica[][100], int n, int m) {
    printf("Matricata e:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrica[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, matrica[100][100];
    printf("Vnesi broj na redici: ");
    scanf("%d", &n);
    printf("Vnesi broj na koloni: ");
    scanf("%d", &m);
    vnesiMatrica(matrica, n, m);
    pechatiMatrica(matrica, n, m);
    return 0;
}
