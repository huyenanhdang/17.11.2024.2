// bai 5 cach 2
#include <stdio.h>

int main() {
    int n,t = 0;
    printf("Nhap 1 so nguyen duong: ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            t = t + i;
        }
    }
    if (t == n) {
        printf("%d la so hoan hao", n);
    } else {
        printf("%d khong la so hoan hao", n);
    }
    return(0);
}
