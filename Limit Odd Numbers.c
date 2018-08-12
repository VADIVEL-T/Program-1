#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,n,o,i;
	printf("Enter First Value:\t");
	scanf("%d",&a);
	printf("Enter Second Value:\t");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	if(i%2!=0)
		printf("%d,",i);
}
