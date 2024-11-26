// Bai 12 cach 2:
#include <stdio.h>

int main() {
    int i, n, j, a[50], kt;
    
    do {
        printf("Nhap so phan tu cua mang n=");
        scanf("%d", &n);
    } while (n <= 0);
    printf("Nhap gia tri tung phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac so nguyen to trong mang da nhap va vi tri trong mang la: ");
    for (i = 0; i < n; i++) 
    {
        kt = 0;
        for (j = 2; j <= a[i]/2; j++) 
        {
            if (a[i]%j == 0) 
            {
                kt = 1;
                break;
            }
        }
    
        if (kt == 0 && a[i] > 1) 
        {
            printf("\n%d vi tri %d", a[i], i);
        }
    }
    return(0);
}

