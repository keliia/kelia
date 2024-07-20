#include<stdio.h>
int main()
{
	int a, b, i;
	char m;

	scanf_s("%d", &a);

	while (1) {
		scanf_s(" %c", &m);

		if (m == '=') {
			break;
		}

		scanf_s("%d", &b);

		switch (m) {
		case'+':
			a += b;
			break;
		case'-':
			a -= b;
			break;
		case'*':
			a *= b;
			break;
		case'/':
			if (b == 0) {
				printf("ERROR");
				return 0;
			}
			a /= b;
			break;
		default:
			printf("ERROR");
			return 0;
		}
	}
	
	printf("%d", a);
	
	return 0;
}