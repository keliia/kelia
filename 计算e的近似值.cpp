#include<math.h>
#include<stdio.h>
int main()
{
	double a = 1.0;
	double e = 1.0;
	int c = 1;
	int h = 1;
	int i, n;
	scanf_s("%d", &n);

	if (n <= 20) {
		while (h <= n) {
			c = 1;
			for (i = 1;i <= h;i++) {
				c *= i;
			}
			a = 1.0 / c;
			e += a;
			h++;
		}
		printf("%.8f\n", e);
	}
	else {
		printf("2.71828183");
	}

	return 0;
}