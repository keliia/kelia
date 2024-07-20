#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	int count = 0;

	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	while (scanf_s("%c", &ch) && count < 10) {
		if (isdigit(ch)) {
			digit++;
		}
		else if (isalpha(ch)) {
			letter++;
		}
		else if (ch == ' ' || ch == '\n') {
			blank++;
		}
		else {
			other++;
		}count++;
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);

	return 0;
}
//ÃùÐ»"#"´óÀÐ