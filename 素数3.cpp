#include<math.h>
#include<stdio.h>
int main()
{
	int n, i, k, isPrime;

	scanf_s("%d", &n);

	k = sqrt(n);

	for (i = 2;i <= k ; i++ ) {
		if (n % i == 0) {
			isPrime = 0;
			break;
		}
	}
	if (isPrime) {
		printf("%d������", n);
	}
	else {
		printf("%d��������", n);
	}
	return 0;
}