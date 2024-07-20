#include<stdio.h>
int main()
{
	int month = 1;
	int adult = 0, baby = 1, total = 1;
	int n;

	scanf_s("%d", &n);

	while(total < n) {
		total += adult;
		adult += baby;
		baby = total - adult;
		month++;
	}

	printf("%d", month);

	return 0;
}