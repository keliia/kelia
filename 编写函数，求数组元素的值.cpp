#include <stdio.h>

void fun(int a[5], int b[5]);

int main()
{
	int a[5], b[5];

	for (int i = 0;i < 5;i++) {
		scanf_s("%d", &a[i]);
	}

	for (int j = 0;j < 5;j++) {
		scanf_s("%d", &b[j]);
	}

	fun(a, b);

	for (int l = 0;l < 5;l++) {
		printf("%d", a[l]);
		if (l != 4) {
			printf(" ");
		}
		else {
			printf("\n");
		}
	}

	return 0;
}

void fun(int a[5], int b[5])
{	
	for (int k = 0;k < 5;k++) {
		a[k] = a[k] * a[k] + b[4 - k] * b[4 - k];
	}
}