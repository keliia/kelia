#include<stdio.h>
int main()
{
	int a;
	
	scanf("%d",&a);
	
	if (1<=a&&a<=5) {
		printf("%d",a+2);
	}
	else {
		printf("%d",a-5);
	}
	return 0;
}