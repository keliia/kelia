#include<stdio.h>
#include<math.h>

int main()
{
	int y,f,n,u,i;
	
	scanf("%d",&n);
	
	int exit=0;
	
	for(y=0;y<100;y++){
		for(f=0;f<100;f++){
			if(f*100+y-n==y*200+2*f){
				printf("%d.%d",y,f);
				exit=1;
				break;
			}
		}
		if(exit==1){
			break;
		}
	}
	
	if(y==100&&f==100){
		printf("No Solution");
	}
	
	return 0;
}
