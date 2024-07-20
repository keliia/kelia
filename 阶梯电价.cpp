#include<stdio.h>

float power(float e);

int main()
{
	float e;

	scanf_s("%f", &e);

	if (e >= 0) {
		printf("cost = %.2f", power(e));
	}
	else {
		printf("Invalid Value!");
	}

	return 0;
}

float power(float e)
{
	float cost;

	if (e <= 50) {
		cost = e * 0.53;
	}
	else {
		cost = 50 * 0.53 + (e - 50) * 0.58;
	}

	return cost;
}