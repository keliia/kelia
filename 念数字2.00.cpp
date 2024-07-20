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

    //��л"����"(const char*)
    /*�� C �����У��ַ�������ֵ���� "ling", "yi", �ȣ�ʵ�����ǳ����ַ������洢�ڳ����ֻ���ڴ�������ˣ�ʹ�� const char* ��ָ����Щ�����ַ����ǺϷ��ģ���Ϊ const �ؼ��ֱ�ʾָ��ָ���������ֻ���ģ����᳢���޸���Щ�����ַ�����

    �����ᵽ�Ĵ����У�ʹ�� const char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" }; �ǺϷ��ģ���Ϊ pinyin ��һ��ָ�����飬ÿ��Ԫ�ض�ָ��һ�������ַ�����

        ������ʹ�� char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" }; ʱ���������ᷢ������򱨴���Ϊ char* ��ʾָ��ָ������ݿ��Ա��޸ģ��������ַ�����ֻ���ģ������޸���Щ�����ַ����ᵼ��δ������Ϊ����ˣ�Ӧ��ʹ�� const char* ��ָ�����ַ�������ȷ�����������޸���Щֻ�����ݡ�*/

    return 0;
}