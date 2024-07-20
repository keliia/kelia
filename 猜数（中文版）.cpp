#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(0));

	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;

	do {
		scanf_s("%d", &a);
		count++;
		if (a == number) {
			break;
		}
		if (a < number) {
			printf("太小了\n");
		}
		else {
			printf("太大了\n");
		}
	} while (a != number);

	if (count <= 3) {
		printf("运气是真的好！\n");
	}
	else if (count > 3) {
		printf("运气不错！\n");
	}

	return 0;
}