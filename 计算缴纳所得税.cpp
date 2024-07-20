#include<stdio.h>
int main()
{
	int a;

	scanf_s("%d", &a);

	switch (a/1000)
	{
		case 0:
		case 1:
		case 2:printf("0.00\n");break;
		case 3:
		case 4:printf("%.2f\n", (a - 2999) * 0.03);break;
		case 5:
		case 6:
		case 7:printf("%.2f\n", (a - 4999) * 0.1 +60);break;
		default:printf("%.2f\n", (a - 7999) * 0.15 +360);
	}

	return 0;
}