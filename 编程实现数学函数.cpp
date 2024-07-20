#include <stdio.h>

int main() {
    float x;

    scanf_s("%f", &x);

	if (x >= 20) {
		printf("y=%.1f", x - 3);
	}
	else if (x <= 0) {
		printf("y=%.1f", x * 3);
	}
	else if (0 < x && x < 20) {
		printf("y=%.1f", x + 3);
	}
    return 0;
}