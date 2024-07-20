#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main()
{
	char sing[11];
	int count[4] = { 0 };

	fgets(sing, 11, stdin);

	for (int i = 0;i < strlen(sing) ;i++) {
		char c = tolower(sing[i]);
		int e = c;
		if (e >= 97 && e <= 122) {
			count[0]++;
		}
		else if (e == 13 || e == 10 || e == 32) {
			count[1]++;
		}
		else if (e >= 48 && e <= 57) {
			count[2]++;
		}
		else {
			count[3]++;
		}
	}

	const char* vain[] = { "letter","blank","digit","other" };

	for (int j = 0;j < 4;j++) {
		printf("%s = %d", vain[j], count[j]);
		if (j != 3) {
			printf(", ");
		}
	}

	return 0;
}