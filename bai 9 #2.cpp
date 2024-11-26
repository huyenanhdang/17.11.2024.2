// Bai 9 cach 2:
#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float x, s = 1, gt = 1;
    printf("nhap n=");
    scanf("%d", &n);
    printf("nhap x=");
    scanf("%f", &x);

    for (i = 1; i <= n; i++) {
        gt = gt * i;
        s = s + gt * pow(x, i);
    }
    printf("tong tinh duoc la: %8.2f", s);
    return(0);
}