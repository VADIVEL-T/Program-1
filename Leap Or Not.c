#include<stdio.h>
int main()
{
	int i,n;
	printf("Type Year");
	scanf("%d",&n);
	if(n%400==0)
	printf("Yes");
	else if(n%4==0)
	printf("Yes");
	else
	printf("No");	
}
