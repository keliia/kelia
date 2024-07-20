#include<math.h>
#include<stdio.h>
int isPrime(int i)
{
	int k, j, h;
	int ret = 1;
	k = sqrt(i);
	for (j = 2;j <= k;j++) {
		if (i % j == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int main()
{
	int a;
	scanf_s("%d", &a);
	if (isPrime(a)) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}

	return 0;
}