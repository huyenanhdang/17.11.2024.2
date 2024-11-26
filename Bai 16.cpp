// Bai 16:
#include <stdio.h>

int main() {
    int n, a, x;
    int arr[50];
    int tong = 0, tbc = 0; 

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
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            tong += arr[i];
            tbc++;
        }
    }

    if (tbc > 0) {
        printf("\nTrung binh cong cac so chia het cho 3 trong day: %.2fn", (float)tong / tbc);
    } else {
        printf("\nKhong co so nao chia het cho 3 trong day.\n");
    }

    do {
        printf("\nNhap so X can chen: ");
        scanf("%d", &x);
        printf("Nhap vi tri a de chen (a <= a <= %d): ", n + 1);
        scanf("%d", &a);
        if (a < 1 || a > n + 1) {
            printf("Vi tri khong hop le. Vui long nhap lai.\n");
        }
    } while (a < 1 || a > n + 1);

    for (int i = n; i >= a; i--) {
        arr[i] = arr[i - 1];
    }
    arr[a - 1] = x;
    n++;

    printf("\nMang sau khi chen %d vao vi tri %d:\n", x, a);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return(0);
}