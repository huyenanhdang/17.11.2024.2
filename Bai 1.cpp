// Bai 1:
#include <stdio.h>
#include <math.h>

int main () 
{
    int n, tong = 0;
    printf("Nhap gia tri cua n vao day: "),
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2) {
        tong += i * i;
    }

    printf("Tong binh phuong cac so le tu 1 den %d la: %d", n, tong);
    return(0);
}


