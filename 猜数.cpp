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
			printf("Too small\n");
		}
		else {
			printf("Too big\n");
		}		
	} while (a != number);

	if (count <= 3) {
		printf("Lucky You!\n");
	}
	else if (count > 3) {
		printf("Good Guess!\n");
	}

	return 0;
}