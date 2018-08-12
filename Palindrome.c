#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,temp,i,sum;
	printf("Enter A Number:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	if(sum==temp)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not A Palindrom");
	}
}
