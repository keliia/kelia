#include <stdio.h>

int main()
{
	int a[] = { 1,2,3,4 };
	int* p = a;

	printf("*p = %d\n", *p);
	printf("p[0] = %d\n", p[0]);
	printf("*a = %d\n", *a);
	printf("a[0] = %d\n", a[0]);

	return 0;
}