// Bai 13:
#include <stdio.h>

int main() 
{
    int n, arr[50], max, maxIndex, sum = 0;
    float avg;

    do {
        printf("Nhap so luong phan tu cua mang (toi da 50): ");
        scanf("%d", &n);
        if (n <= 0 || n > 50) {
            printf("So luong phan tu khong hop le. Vui long nhap lai ");
        }
    } while (n <= 0 || n > 50);

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nDay so da nhap: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max = arr[0];
    maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    printf("\nSo lon nhat trong day la %d o vi tri %d\n", max, maxIndex);

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg =(float)sum / n;
    printf("\nTong cua cac so trong day: %d\n", sum);
    printf("Trung binh cong cua cac so trong day: %.2f\n", avg);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nDay so sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return(0);
}







