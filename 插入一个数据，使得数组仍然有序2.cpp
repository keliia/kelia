#include<stdio.h>
int main()
{
    int a[6], r[7];
    int i, j, k, t, n;
    
    for (i = 0;i <= 5;i++) {
        scanf_s("%d", &a[i]);
    }

    scanf_s("%d", &k);

    for (i = 0;i < 6;i++) {
        if (k > a[i]) {
            r[i] = a[i];
        }
        if (k <= a[i]) {
            r[i] = k;
            for (j = i + 1;j < 6;j++) {               
                r[j] = a[j-1];
            }
            break;
        }
    }

    r[6] = a[5];

    for (i = 0;i < 7;i++) {
        printf("%d ", r[i]);
        if (i != 6) {
            printf(" ");
        }
    }

    /*int a[6];
    int i, j, t;
    
    for (i = 0;i <= 5;i++) {
        scanf_s("%d", &a[i]); 
    }

    for (i = 1;i < 6;i++) {
        for (j = 0;j < 6 - i;j++) {
            if (a[j + 1] >= a[j]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }        
    }

    for (j = 0;j < 6;j++) {
        printf("%d\n", a[j]);
    }*/

    return 0;
}