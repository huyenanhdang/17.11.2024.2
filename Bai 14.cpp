#include <stdio.h>

int main() {
    int n;
    int arr[30];
    int x;

    do {
        printf("Nhap so luong phan tu (0 < n < 30): ");
        scanf("%d", &n);
        if (n <= 0 || n >= 30) {
            printf("So phan tu khong hop le. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n >= 30);

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nDay so da nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nCac so chan va vi tri cua chung:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("So %d tai vi tri %d\n", arr[i], i);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nDay so sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nNhap so x can chen: ");
    scanf("%d", &x);

    int i;
    for (i = n - 1; i >= 0 && arr[i] < x; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = x;
    n++;

    printf("\nDay so sau khi chen %d va sap xep giam dan:\n", x);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


