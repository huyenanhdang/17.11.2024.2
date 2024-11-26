// Bai 15:
#include <stdio.h>

int main() {
    int n;
    float arr[50];
    float tong = 0;

do {
        printf("Nhap so luong phan tu (1 <= n <= 50): ");
        scanf("%d", &n);
        if (n <= 0 || n > 50) {
            printf("So phan tu khong hop le. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n > 50);

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            tong += arr[i];
        }
    }

    printf("\nTong cac so duong trong day la: %.2f\n" ,tong);

    int khongAm = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            arr[khongAm++] = arr[i];
        }
    }

    printf("\nDay so sau khi xoa cac so am la:\n");
    for (int i = 0; i < khongAm; i++) {
        printf("%.2f ", arr[i]);
    }
    return(0);
}






