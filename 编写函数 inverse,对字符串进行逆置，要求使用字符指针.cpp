#include <stdio.h>
#include <string.h>

void inverse(char* array);

int main()
{
	char array[100];

	fgets(array, sizeof(array), stdin);
	array[strcspn(array, "\n")] = '\0';

	inverse(array);

	printf("%s", array);

	return 0;
}

void inverse(char* array)
{
	int len = strlen(array);

	char c;

	for (int i = 0;i < (len / 2);i++) {
		c = array[i];
		array[i] = array[len - 1 - i];
		array[len - 1 - i] = c;
	}
}