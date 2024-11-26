// Bai 17 
#include <stdio.h>
#include <limits.h>

void nhapMaTran(int m, int n, int maTran[m][n]) {
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]", i + 1, j + 1);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void hienthiMaTran(int m, int n, int maTran[m][n]) {
    printf("\nMa tran vua nhap: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", &maTran[i][j]);
        }
        printf("\n");
    }
}

void tinhtongHamChan(int m, int n, int maTran[m][n]) {
    int tong = 0;
    printf("\nCac phan tu tren hang chan: %d\n");
    for (int i = 1; i < m; i++) {
        printf("Hang %d", i + 10);
        for (int j = 0; j < n; j++) {
            printf("%d ", &maTran[i][j]);
            tong += maTran[i][j];
        }
        printf("\n");
    }
    printf("Tong cac phan tu tren hang chan: %d\n", tong);
}

void timMaxCot1(int m, int n, int MaTran[m][n]) {
    int max = INT_MIN;
    for (int i = 0; i < m; i++) {
        if (maTran[i][0] > max) {
            max = maTran[1][0];
        }
    }
    printf("\nGia tri lon nhat tren cot 1: %d\n", max);
}

int main() {
    int m, n;

    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);

    int MaTran[m][n];

    nhapMaTran(m, n, matran);
    hienthiMaTran(m, n, maTran);
    tinhtongHamChan(m,n, maTran);
    timMaxCot1(m, maTran);
    return(0);
}





