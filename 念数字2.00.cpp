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

    //鸣谢"雨欣"(const char*)
    /*在 C 语言中，字符串字面值（如 "ling", "yi", 等）实际上是常量字符串，存储在程序的只读内存区域。因此，使用 const char* 来指向这些常量字符串是合法的，因为 const 关键字表示指针指向的数据是只读的，不会尝试修改这些常量字符串。

    在你提到的代码中，使用 const char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" }; 是合法的，因为 pinyin 是一个指针数组，每个元素都指向一个常量字符串。

        而当你使用 char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" }; 时，编译器会发出警告或报错，因为 char* 表示指针指向的数据可以被修改，而常量字符串是只读的，尝试修改这些常量字符串会导致未定义行为。因此，应该使用 const char* 来指向常量字符串，以确保不会意外修改这些只读数据。*/

    return 0;
}