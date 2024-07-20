#include<math.h>
#include<stdio.h>
int main()
{
	double a = 1.0;
	double e = 1.0;
	int c = 1;
	int d = 1;
	int i;

	while (fabs(a) > 1E-4) {
		c = 1;
		for (i = 1;i <= d;i++) {
			c *= i;
		}
		a = 1.0 / c;
		if (d % 2 == 0) {
			e += a;
		}
		else {
			e -= a;
		}
		d++;
	}

	printf("%.3f\n", e);

	return 0;
}