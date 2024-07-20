#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[100];
	int count[5] = { 0 };
	char letter[5] = { 'a','e','i','o','u' };
	fgets(str,100,stdin);

	for (int i = 0;i <= strlen(str) - 1;i++) {
		char c = strlwr(str[i]);
		switch (c) {
		case 'a':count[0]++;break;
		case 'e':count[1]++;break;
		case 'i':count[2]++;break;
		case 'o':count[3]++;break;
		case 'u':count[4]++;break;
		}
	}

	for (int j = 0;j <= 4;j++) {
		printf("%c~%d\n", letter[j], count[j]);
	}

	return 0;
}