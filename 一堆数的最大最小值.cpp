#include <stdio.h>

void minmax(int a[], int len, int* min, int* max);

int main()
{
	int a[] = { 1,2,5,6,7,8,9,10,6,8,12,9,3,13,8,7 };
	int min, max;

	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);

	printf("min=%d max=%d", min, max);

	return 0;
}

void minmax(int a[], int len, int* min, int* max)
{
	int i;

	*min = *max = a[0];

	for (i = 0;i < len;i++) {
		if (*min >= a[i]) {
			*min = a[i];
		}
		if (*max <= a[i]) {
			*max = a[i];
		}
	}
}