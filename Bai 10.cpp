// Bai 10:
#include <stdio.h>

int main()
{
    int n, S = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("So nguyen n khong thoa man");
        return 1;
    }

    for (int i = 0; i <= n; i++)
    {
        S += (2 * i + 1);
    }
    printf("Gia tri S(%d) = %d", n, S);

    return(0);
}





