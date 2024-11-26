// Bai 5 cach 1:
#include <stdio.h>
#include <math.h>

int test(int n) {
    if (n <= 0) {
        return(0);
    }
    int tonguoc = 0;
    
    for (int i = 1; i <= n /2; i++) {
        if (n % i == 0) {
            tonguoc += i;
        }
    }
    return tonguoc == n;
}

int main()
{
    int n;

    printf("Nhap so nguyen vao day: ");
    scanf("%d", &n);

    if (test(n)) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }
    return(0);
}







