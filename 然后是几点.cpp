#include<stdio.h>
int main()
{
#include<stdio.h>
	int main()
	{
		int a, b, c, d;

		scanf_s("%d %d", &a, &b);

		c = a / 100 + b / 60;

		if (a % 100 + b % 60 >= 60) {
			c = c + (a % 100 + b % 60) / 60;
			d = a % 100 + b % 60 - 60;
		}
		else if (a % 100 + b % 60 < 0) {
			c = c - 1;
			d = 60 + (a % 100 + b % 60);
		}
		else {
			c = c;
			d = a % 100 + b % 60;
		}
		if (c == 0) {
			printf("%03d", c * 100 + d);
		}
		else {
			if (c <= 0) {
				printf("%d", (c + 24) * 100 + d);
			}
			else {
				printf("%d", c * 100 + d);
			}
		}
		return 0;
	}