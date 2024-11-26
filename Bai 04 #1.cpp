// Bai 4:
#include <stdio.h>
#include <stdlib.h>

int uscln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int bscnn(int a, int b) {
    return abs(a * b)/uscln(a, b);
}

int main() {
    int a, b;


    printf("So nguyen thu 1: ");
    scanf("%d", &a);
    printf("So nguyen thu 2: ");
    scanf("%d", &b);

    if (a == 0 || b == 0) {
        printf("Khong co USCLN hoac BSCNN khi mot trong hai so la 0.");
        return 0;
    }
    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, uscln(a, b));
    printf("Boi so chung nho nhat cua %d va %d la: %d", a, b, bscnn(a, b));

    return 0;
}




