#include<math.h>
#include<stdio.h>
int main() 
{
    int a, b, i, j, k, m, n;
    int isPrime = 1;

    m = 0;
    n = 0;

    scanf_s("%d %d", &a, &b);
    
    for (i = 2;m<=b;i++) {
        isPrime = 1;
        k = sqrt(i);
        for (j = 2;j <= i - 1;j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }            
        }
        if (isPrime) {
            m++;
            if (m >= a&&m <= b) {
                n += i;
            }
        }
    }

    printf("%d", n);

    return 0;
}