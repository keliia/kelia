#include<stdio.h>
int main()
{
	int i;
	int m, n = 0;

	for (i = 0;i < 10;i++) {
		scanf_s("%d ", &m);
		n += m;
	}
	printf("sum=%d", n);
	return 0;
}