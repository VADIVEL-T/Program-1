#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=1,i,n,j,k;
	printf("Enter A Number:");
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		c=c*n;
	}
	printf("%d",c);
	return 0;
}

