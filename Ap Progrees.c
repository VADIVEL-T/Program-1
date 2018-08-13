#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n,tot;
	float i;
	scanf("%d%d%d",&a,&b,&c);
	i=(float)a/2;
	n=(2*b)+((a-1)*c);
	tot=i*n;
	printf("%d",tot);
}
