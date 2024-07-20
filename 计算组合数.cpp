#include <stdio.h>

int fun(int a);

int main()
{
	int m, n;

	printf("请输入两个非零正整数:");

	scanf_s("%d%d", &m, &n);

	if (m < n) {
		printf("你输入的数据有误");
	}
	else {
		printf("%d", fun(m) / (fun(n) * fun(m - n)));
	}

	return 0;
}

int fun(int a)
{
	int s = 1;
	for (int i = 1;i <= a;i++) {
		s *= i;
	}

	return s;
}