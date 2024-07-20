#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    int num, i, j;
    
    scanf_s("%d", &num);

    if (num < 0) {
        printf("fu ");
        num = -num;
    }

    if (num == 0) {
        printf("ling");
    }
    else {
        int digits[6] = { 0 };
        int index = 0;

        for (i = 0;num > 0 && index < 6;i++) {
            digits[i] = num % 10;
            index++;
            num /= 10;
        }

        const char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

        for (j = index - 1;j >= 0;j--) {
            printf("%s", pinyin[digits[j]]);
            if (j != 0) {
                printf(" ");
            }
        }
    }

    //ÃùĞ»"ÓêĞÀ"(const char*)

    return 0;
}