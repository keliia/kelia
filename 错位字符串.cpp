#include <stdio.h>
#include <string.h>

int main()
{
    char letter[] = "QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
    char input[100];

    fgets(input, sizeof(input), stdin);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == ' ') {
            printf(" ");
            continue;
        }
        else {
            for (int j = 0; j < strlen(letter); j++) {
                if (input[i] == letter[j]) {
                    if (j == 0);
                    else {
                        printf("%c", letter[j - 1]);
                    }
                    break;
                }
            }
        }
    }

    return 0;
}