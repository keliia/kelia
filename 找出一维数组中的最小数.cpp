#include<stdio.h>
int main()
{
    int a[4], min;

    scanf_s("%d ", &min);

    for (int i = 0;i < 4;i++) {
        scanf_s("%d ", &a[i]);
        if (a[i] <= min) {
            min = a[i];
        }
    }

    printf("min=%d", min);

    return 0;
}