#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
    int n,i,b,j,c;
    printf("Start number:\t");
    scanf("%d",&n);
    printf("\nLast number:\t");
    scanf("%d",&b);
    for(i=n;i<b;i++)
    {
    c=0;
    	for(j=2;j<sqrt(i);j++)
    	if(i%j==0)
    	{
    		c=1;
    		break;
    	}
		if(c==0)
		{
			printf("The Prime Numbers:%d\t\n",i);
		}
	}
}

