#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,fact=1,i;
	printf("Enter First Value:\t");
	scanf("%d",&a);
	if(a>0)
	{
		for(i=1;i<=a;i++)
		fact=fact*i;
	}
	printf("\t\t\t%d",fact);
}
