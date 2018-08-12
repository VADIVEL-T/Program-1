#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,n,b,sum=0;
	scanf("%d\n%d",&n,&b);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=b;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	
}
