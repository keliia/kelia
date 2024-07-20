#include<stdio.h>
int main()
{
	int a,b,i,j;
	int count;
	
	count=0;
	
	scanf("%d,%d",&a,&b);
	
	for(i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
			count++;
		}
	}
	printf("%d",count);
	
	return 0;
}
