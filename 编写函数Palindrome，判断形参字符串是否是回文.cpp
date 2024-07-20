#include <stdio.h>
#include <string.h>

int Palindrome(char* str);

int main()
{
	char str[100];

	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	if (Palindrome(str) == 1) {
		printf("%s is a Palindrome", str);
	}	
	else {
		printf("%s is not a Palindrome", str);
	}

	return 0;
}

int Palindrome(char* str)
{
	int n = strlen(str);
	int gloomy = 1;

	for (int i = 0;i < (n / 2);i++) {
		if (str[i] != str[n - 1 - i]) {
			gloomy = 0;
			break;
		}
	}

	return gloomy;
}