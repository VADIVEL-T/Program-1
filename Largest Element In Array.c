#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,max,n,p[10];
	printf("Enter A Number:\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=1;i<n;i++)
	{
			if(p[i]<i)
			{
				max=p[i];
			}
	}
	printf("%d",max);
}
