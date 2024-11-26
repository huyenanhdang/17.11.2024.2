// Bai 5 cach 2:
#include <stdio.h>

int main() {
    int i, j, kt;
    printf("Cac so nguyen to trong khoang tu 1 den 50 la\n");
    for (i = 2; i <= 50; i++) 
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






