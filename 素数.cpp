#include<stdio.h>
int main()
{
	int n, i, k;

	scanf_s("%d", &n);

	for (i = 2;i <= n-1 ; i++ ) {
		if (n % i == 0) break;
	}
	if (i > n-1 ) {
		printf("%d������", n);
	}
	else {
		printf("%d��������", n);
	}
	return 0;
}