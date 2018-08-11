#include <stdio.h>
 
int main(void) {
	int a,b,c;
	printf("Enter A Number\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Positive");
	}
	else if(a==0)
	{
		printf("Zero");
	}
	else
	{
		printf("Negative");
	}
	return 0;
}
