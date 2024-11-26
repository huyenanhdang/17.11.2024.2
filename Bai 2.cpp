// Bai 2:
#include <stdio.h>

int main () 
{
    float a, b, c;

    printf("Nhap gia tri cua a: ");
    scanf("%f", &a);

    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);

    printf("Nhap gia tri cua c: ");
    scanf("%f", &c);

    if (a > b && a > c) {
        printf("a = %f la so lon nhat", a);
    } else if (b > a && b > c) {
        printf("b = %f la so lon nhat", b);
    } else {
        printf("c = %f la so lon nhat", c);
    }
    return(0);
}




