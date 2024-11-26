// Bai 6: 
#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Nhap gia tri cua n vao day: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("%d khong phai la so chinh phuong", n);
    } else {
        int sqrt_n = (int)sqrt(n);
        if (sqrt_n * sqrt_n == n) {
            printf("%d la so chinh phuong", n);
        } else {
            printf("%d khong phai la so chinh phuong", n);
        }
    }
    return(0);
}







