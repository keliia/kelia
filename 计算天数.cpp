#include<stdio.h>
int main()
{
	int a, b, c;

	scanf_s("%d/%d/%d", &a, &b, &c);

	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		switch (b) {
		case 1:printf("%d", c);break;
		case 2:printf("%d", c + 31);break;
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:printf("%d", ((b - 1) / 2) * 31 + (b - 1) / 2 * 30 - 1 + c);break;
		default:printf("%d", (b / 2) * 31 + ((b / 2) - 1) * 30 - 1 + c);
		}
	}
	else {
		switch (b) {
		case 1:printf("%d", c);break;
		case 2:printf("%d", c + 31);break;
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:printf("%d", ((b - 1) / 2) * 31 + (b - 1) / 2 * 30 - 2 + c);break;
		default:printf("%d", (b / 2) * 31 + ((b / 2) - 1) * 30 - 2 + c);
		}
	}
	return 0;
}