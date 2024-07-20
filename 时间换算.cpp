#include<stdio.h>
int main() {
    int a, m, n, b;

    scanf_s("%d", &a);

    m = a / 100;
    n = a % 100;

    if (m >= 8) {
        m -= 8;
    }
    else {
        m += 16;
    }

    b = m * 100 + n;

    printf("%d", b);

    return 0;
}