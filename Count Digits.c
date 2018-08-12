#include<stdio.h>
int main()
{
	int a,i,count=0,sum;
	printf("Enter A Number:\n");
	scanf("%d",&a);
	do
	{
		a=a/10;
		count++;
	}while(a!=0);
		printf("%d",count);
	}
