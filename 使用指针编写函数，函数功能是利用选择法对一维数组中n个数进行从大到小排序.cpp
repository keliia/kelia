#include <stdio.h>
#include <string.h>

void sort(int* a, int n);

int main()
{
    int a[100], i, n;

    scanf_s("%d", &n); //数组实际需要的元素个数

    for (i = 0;i < n;i++) {
        scanf_s("%d", &a[i]);
    }   

    sort(a, n);

    for (i = 0;i < n;i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(" ");
        }
        else {
            printf("\n");
        }
    }

    return 0;
}

void sort(int* a, int n)
{
    int k, t;

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n - 1;j++) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}