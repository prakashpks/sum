# sum
#include <stdio.h>

int main(void) {
	int num,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	while(num>0)
	{
	    sum=sum+num;
	    num--;
	}
	printf("\noutput is:%d",sum);
	return 0;
}

