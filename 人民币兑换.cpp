#include<stdio.h>

int main()
{
	int time, five, two, one;
	int count = 0;
	int exit = 0;

	scanf_s("%d", &time);

	for (five = 1;five <= 30;five++) {
		for (two = 1;two <= 75;two++) {
			one = 100 - five - two;
			if (five * 0.05 + two * 0.02 + one * 0.01 == 1.50) {
				printf("%d %d %d\n", five, two, one);
				count++;
				if (count == time) {
					exit = 1;
					break;
				}
			}
			
		}
		if (exit) {
			break;
		}
	}



	return 0;
}