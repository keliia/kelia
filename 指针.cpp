#include <stdio.h>

void f(int* p);

int main()
{
	int a = 0;

	printf("&a = %p\n", &a);
	f(&a);
	printf(" a = %d\n", a);

	return 0;
}

void f(int* p)
{
	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	*p = 26;
}