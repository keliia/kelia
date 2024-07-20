#include <stdio.h>
#include <string.h>

void copy(char* src, char* dest, int size);
void bubble(int arr[], int size);
void sad(char* str1, int num1[]);

int main()
{
    char str1[100], str2[100];
    int num1[100], num2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if (strlen(str1) == strlen(str2)) {
        sad(str1, num1);
        sad(str2, num2);

        int size1 = sizeof(num1) / sizeof(num1[0]);
        int size2 = sizeof(num2) / sizeof(num2[0]);

        bubble(num1, size1);
        bubble(num2, size2);

        int h;

        if (size2 != size1) {
            printf("NO");
        }
        else {
            for (h = 0;h < size1;h++) {
                if (num1[h] != num2[h]) {
                    printf("NO");
                    break;
                }
            }
            if (h == size1) {
                printf("YES");
            }
        }
    }
    else {
        printf("NO");
    }

    return 0;
}

void copy(char* src, char* dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

void bubble(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sad(char* str1, int num1[]) {
    char arr1[100] = { '\0' };
    char str11[100];
    
    copy(str1, str11, strlen(str1));
    
    int a = 0, n = 0, r = 0;
    
    for (int i = 0;i < strlen(str1);i++) {
        for (int j = i + 1; j < strlen(str1); j++) {
            if (str1[i] == str1[j]) {
                arr1[a] = str1[i];
                a++;
                str1[j] = 'w';
                break;
            }
        }
    }
    
    for (int k = 0;arr1[k] != '\0';k++) {
        n = 0;
        for (int t = 0;t < strlen(str1);t++) {
            if (arr1[k] == str11[t]) {
                n++;
            }
        }
        num1[r] = n;
        r++;
    }
}

/*思路:我认为满足（1.同一个字符经转换后仍然为同一个字符2.相同字符的个数不会发生改变），就可以认为第一行输入能加密成第二行
1.判断两个字符数组的长度是否相等，如果不相等，直接输出NO
2.找出一个字符数组中存在重复的字符，统计这些字符的出现次数，并用num数组来记录这些次数（sad函数）
3.使用冒泡法（bubble函数），调整num数组的排序（从小到大）
4.将两个字符数组产生的num数组进行比较，如果完全相同，输出YES,否则输出NO*/