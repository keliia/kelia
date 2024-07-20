#include<stdio.h>
int main()
{
    int a[6], r[7];
    int i, j, k, t, n;
    
    for (i = 0;i <= 5;i++) {
        scanf_s("%d", &a[i]);
        if (i == 5) {
            printf("\n");
        }
    }

    scanf_s("%d", &k);

    for (i = 0;i < 6;i++) {
        if (k >= a[i]) {
            r[i] = a[i];
        }
        if (k >= a[i] && k <= a[i + 1]) {            
            r[i + 1] = k;
            for (j = i + 1;j < 6;j++) {               
                r[j+1] = a[j];
            }
            break;
        }
    }

    r[6] = a[5];

    for (i = 0;i <= 6;i++) {
        printf("%d ", r[i]);
    }

    return 0;
}