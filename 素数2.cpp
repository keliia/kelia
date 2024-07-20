#include<math.h>
#include<stdio.h>
int main()
{
	int n, i, k;

	scanf_s("%d", &n);

	k = sqrt(n);

	for (i = 2;i <= k ; i++) {
		if (n % i == 0)break;
	}
	if (i > k) {
		printf("%d是素数", n);
	}
	else {
		printf("%d不是素数", n);
	}
	return 0;
}