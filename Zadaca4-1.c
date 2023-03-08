#include <stdio.h>

void vnesiMatricaR(int matrica[][100], int n, int m, int i, int j) {
    if (i == n) {
        return;
    }
    printf("Vnesi element za matrica[%d][%d]: ", i, j);
    scanf("%d", &matrica[i][j]);
    if (j == m - 1) {
        vnesiMatricaR(matrica, n, m, i + 1, 0);
    }
    else {
        vnesiMatricaR(matrica, n, m, i, j + 1);
    }
}

void pechatiMatricaR(int matrica[][100], int n, int m, int i, int j) {
    if (i == n) {
        return;
    }
    printf("%d\t", matrica[i][j]);
    if (j == m - 1) {
        printf("\n");
        pechatiMatricaR(matrica, n, m, i + 1, 0);
    }
    else {
        pechatiMatricaR(matrica, n, m, i, j + 1);
    }
}

int main() {
    int n, m, matrica[100][100];
    printf("Vnesi broj na redici: ");
    scanf("%d", &n);
    printf("Vnesi broj na koloni: ");
    scanf("%d", &m);
    vnesiMatricaR(matrica, n, m, 0, 0);
    pechatiMatricaR(matrica, n, m, 0, 0);
    return 0;
}
