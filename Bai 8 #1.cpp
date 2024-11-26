// Bai 8 cach 1:
#include <stdio.h>
#include <math.h>

bool isPrime(int n) {
    if (n < 2) 
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 1) 
    {
        printf("So nguyen nho hon khong phu hop.");
        return 1;
    }

    printf("Cac so nguyen to tu 1 den %d la: ", n);

    for (int i = 1; i <= n; i++) 
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }
    return(0);
}






