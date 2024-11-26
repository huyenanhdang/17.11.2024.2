// Bai 11:
#include <stdio.h>

int main() 
{
    int x, y, S;

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    printf("Nhap gia tri y: ");
    scanf("%d", &y);

    if (x > y)
    {
        S = 2 * x * x * y + 1;
        printf("S = %d", S);
    }
    else
    {
        S = 5 * x - 3 * y * y * y * x;
        printf("S = %d", S);
    }
    return(0);
}




