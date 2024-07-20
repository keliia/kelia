#include<math.h>
#include<stdio.h>
int main()
{
	int n, i, k, isPrime, a, b, count;

	count = 0;

	scanf_s("%d,%d", &a, &b);

	for (n = a;n <= b;n++) {
		isPrime = 1;
		k = sqrt(n);
		for (i = 2;i <= k; i++) {
			if (n % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (i > k) {
			count++;
		}
	}

	printf("count=%d", count);
	
	return 0;
}