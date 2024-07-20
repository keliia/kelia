#include <stdio.h>

void CharPyramid(int n, char ch);

int main()
{
    int n;
    char ch;

    scanf_s("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

void CharPyramid(int n, char ch)
{
    int i, j, k;
    for (i = 0;i < n;i++) {
        for (k = 0;k < n - (i + 1);k++) {
            printf(" ");
        }
        for (j = 0;j <= i;j++) {
            printf("%c ", ch);

            if (j == i) {
                printf("\n");
            }
        }
    }
}