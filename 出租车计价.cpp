#include<stdio.h>
int main()
{
	float a;
	int b, c, m;

	scanf_s("%f %d", &a, &b);

	if (b < 5) {
		c = 0;
	}
	else {
		c = (((b - 5) / 5) + 1) * 2;
	}

	switch ((int)(a / 1))
	{
		case 0:
		case 1:
		case 2:printf("%d\n",10+c);break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:printf("%d\n", (int)(10 + (a - 3) * 2 + c + 0.5));break;
		default:printf("%d\n", (int)(24 + (a - 10) * 3 + c + 0.5));
	}

	return 0;
}