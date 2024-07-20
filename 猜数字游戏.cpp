#include<stdio.h>
int main()
{
	int number, n;
	
	scanf_s("%d", &number);
	scanf_s("%d", &n);

	int k;
	int count = 0;

	do {
		scanf_s("%d", &k);
		count++;
		if (k < 0) {
			count = n + 1;
			break;
		}
		if (k == number) {
			break;
		}
		else if (k < number) {
			printf("Too small\n");
		}
		else {
			printf("Too big\n");
		}
	} while (k != number && count <= n);

	if (count == 1) {
		printf("Bingo!");
	}
	else if (count <= 3) {
		printf("Lucky You!\n");
	}
	else if (count <= n) {
		printf("Good Guess!\n");
	}
	else {
		printf("Game Over\n");
	}

	return 0;
}