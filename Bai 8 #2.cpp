// Bai 8 cach 2:
#include <stdio.h>
#include <stdio.h>

int main() {
    int n, i, j, kt;
    printf("Nhap n=");
    scanf("%d", &n);
    printf("Cac so nguyen to trong khoang tu 1 den %d la\n", n);
    for (i = 2; i <= n; i++) 
    {
        kt = 0;
        for (j = 2; j <= i/2; j++) 
            if (i % j == 0) 
            {
                kt = 1;
                break;
            }
        if (kt == 0) 
            {
                printf("%d ", i);
            }
     
    }
    return(0);
}