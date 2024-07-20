#include<math.h>
#include<stdio.h>
int main()
{
	int n, i, k, isPrime, a, b, count, sum;

	count = 0;
	sum = 0;

	scanf_s("%d %d", &a, &b);

	for (n = a;n <= b;n++) {
		isPrime = 1;
		k = sqrt(n);
		if (n == 1) {
			isPrime = 0;
		}
		for (i = 2;i <= k; i++) {
			if (n % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			count++;
			sum = sum + n;
		}
	}

	printf("%d %d", count, sum);
	
	return 0;
}