// Bai 9: cach 1:
#include <stdio.h>
#include <math.h>

long long factorial(int num)
{
    long long result = 1;

    for (int i =2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    double x, S = 1;

    printf("Nhap so thuc x: ");
    scanf("%lf", &x);

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Vui long nhap n lon hon hoac bang 0: ");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        S += factorial(i) * pow(x, i);
    }
    printf("Gia tri cua S = %.2lf", S);
    return(0);
}
