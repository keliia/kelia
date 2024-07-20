#include<math.h>
#include<stdio.h>
int main() {
    int a, b, c, d, i;

    c = 1;
    d = 0;
    
    scanf_s("%d", &a);

    for (i = 1;a > 0;i*=10) {
        b = a % (10 * i);
        if ((b % 2) == (c % 2)) {
            d += pow(2, c-1);
        }
        c++;
        a /= 10;
    }

    printf("%d", d);

    return 0;
}