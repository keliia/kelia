#include <stdio.h>
#include <string.h>

void stringcat(char a[], char b[]);

int main()
{
	char a[100], b[100];

	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	fgets(b, sizeof(b), stdin);
	b[strcspn(b, "\n")] = '\0';

	stringcat(a, b);

	return 0;
}

void stringcat(char a[], char b[])
{
	int i = 0, j = 0;

	while (a[i] != '\0') {
		i++;
	}

	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}

	a[i] = '\0';

	printf("%s", a);
}