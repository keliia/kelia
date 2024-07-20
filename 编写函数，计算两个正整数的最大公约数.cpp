#include<stdio.h>

int common(int m, int n);

int main()
{
	int m, n, a;

	scanf_s("%d,%d", &m, &n);

	a = common(m, n);

	printf("%d", a);

	return 0;
}

int common(int m, int n)
{
	int fool, answer = 0;
	
	if (m > n) {
		fool = m;
		m = n;
		n = fool;
	}

	for (int i = m;i > 0;i--) {
		if (m % i == 0 && n % i == 0) {
			answer = i;
			break;
		}
	}

	return answer;
}