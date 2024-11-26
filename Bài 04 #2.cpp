// Bai 4 cach 2:
#include <stdio.h>

int main() {
    int a, b, x, y, t, ucln, bcnn;
    printf("Nhap vao 2 so nguyen: \n");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    ucln = a;
    bcnn = b;
    printf("Uoc so chung lon nhat cua %d va %d = %d\n", x, y, ucln);
    printf("Boi so chung nho nhat cua %d va %d = %d\n", x, y, bcnn);
    return(0);
}






