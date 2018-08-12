#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,fact=0,i;
	printf("Enter First Value:\t");
	scanf("%d",&a);
		for(i=1;i<=5;i++)
		{
			fact=i*a;
			printf("%d,",fact);
		}
	
}
