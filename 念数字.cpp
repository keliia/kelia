#include<math.h>
#include<stdio.h>
int main()
{
    int a, i, j, h, l;

    i = 0;

    scanf_s("%d", &a);

    if (a == 0) {
        printf("ling");
    }

    if (a < 0) {
        printf("fu ");
        a = -a;
    }

    if (a > 0) {
        l = a;

        while (a > 0) {
            a /= 10;
            i++;
        }

        for (j = i ;j > 0;j--) {
            h = pow(10, j-1);
            switch (l / h) {
            case 0:printf("ling ");break;
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
            }
            l = l % h;
        }

        h = l % 10;
        switch (h) {
        case 0:break;
        case 1:printf("yi\n");break;
        case 2:printf("er\n");break;
        case 3:printf("san\n");break;
        case 4:printf("si\n");break;
        case 5:printf("wu\n");break;
        case 6:printf("liu\n");break;
        case 7:printf("qi\n");break;
        case 8:printf("ba\n");break;
        case 9:printf("jiu\n");break;
        }
    }

    return 0;
}