#include <stdio.h>

long fun(int a);

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

long fun(int a)
{
	long int t;

	if (a == 0) {
		t = 1;
	}
	else {
		t = fun(a - 1) * a;
	}

	return t;
}