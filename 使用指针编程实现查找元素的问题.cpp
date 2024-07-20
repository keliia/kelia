#include <stdio.h>

int search(int *arr, int m)
{
	int a = -1;

	for (int i = 0;i < 10;i++) {
		if (arr[i] == m) {
			a = i;
			break;
		}
	}

	return a;
}

int main()
{
	int arr[11], m;

	for (int j = 0;j < 11;j++) {
		scanf_s("%d", &arr[j]);
	}

	m = arr[10];

	int result = search(arr, m);

	if (result == -1) {
		printf("not found");
	}
	else {
		printf("%d", result + 1);
	}

	return 0;
}