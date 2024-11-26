// Bai 12 cach 1:
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nCac so nguyen trong mang va vi tri cua chung: \n");
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("So %d tai vi tri %d\n", arr[i], i);
            found = true;
        }
    }

    if (!found) {
        printf("Khong co so nguyen to nao trong mang.");
    }

    return(0);
}







