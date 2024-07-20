#include<stdio.h>
int main()
{
	int a, b;
	char m;

	scanf_s("%d ", &a);
	scanf_s("%c ", &m);
	scanf_s("%d", &b);

	switch (m) {
	case'+':
		printf("%d", a + b);
		break;
	case'-':
		printf("%d", a - b);
		break;
	case'*':
		printf("%d", a * b);
		break;
	case'/':
		printf("%d", a / b);
		break;
	case'%':
		printf("%d", a % b);
		break;
	default:printf("ERROR");
	}
	
	return 0;
}