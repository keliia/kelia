#include<stdio.h>

int main()
{
	int num, score[100];
	int index = 0;

	scanf_s("%d", &num);

	if (num == 0) {
		printf("0 ");
		goto out;
	}

	for (int i = 0;num > 0;i++) {
		score[i] = num % 10;
		num /= 10;
		index++;
	}

	for (int j = index - 1;j >=0;j--) {
		printf("%d ", score[j]);
	}

	out:

	return 0;
}