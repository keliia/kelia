#include <stdio.h>

void sort(int x[], int n)
{
	int i, j, t;
	for (i = 0;i <= n - 2;i++) {
		for (j = i + 1;j <= n - 2;j++) {
			if (x[i] > x[j]) {
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
		}
	}
}

int main()
{
	int a[5] = { 9.8,6,4,7 };
	int b[6] = { 11,9,7,5,3,1 };
	int i, size = 5;

	//sort(a, size);
	//sort(b, size + 1);
	sort(&b[1], size - 2);

	for (i = 0;i <= size;i++) {
		printf("%d ", b[i]);
	}

	return 0;
}

