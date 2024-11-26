// Bai 7 cách 1:
#include <stdio.h>
#include <math.h>

bool isPrime(int n) {
    if (n < 2){
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("Cac so nguyen to tu 1 den 50 la: ");
    for (int i =1; i <= 50; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return(0);
}




