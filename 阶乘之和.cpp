#include<stdio.h>
int main(void) {
    int i, n, j, s;
    long long sum;
    scanf_s("%d", &n);
    s = 0;
    if (n <= 25) {
        for (i = 1;i <= n;i++) {
            sum = 1;
            for (j = 1;j <= i;j++) {
                sum = (sum * j) % 1000000;
            }
            s = (s + sum) % 1000000;
        }
    }
    else {
        s = 940313;
    }
    printf("%d\n", s);
    return 0;
}