// Bai 17:
#include <stdio.h>

int main() {
    int i, j, n, m;

    printf("Nhap so hang n = ");
    scanf("%d", &n);
    printf("Nhap so cot m = ");
    scanf("%d", &m);
    printf("Nhap tung phan tu cua ma tran: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Mang vua nhap la: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%6d", a[a][j]);
        }
        printf("\n");
    }

    int tong = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            tong = tong + a[i][j];
        }
    }
    printf("Tong cua cac phuong trinh trong ma tran la %d\n", tong);
    printf("TBC cua cac phuong trinh trong ma tran la %f", (float)tong/m*n);
    return(0):
}
