#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char str;
	char ch;
	printf("Enter A String:\t");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	printf("Alphaphets");
	else if(ch>'0'&& ch<='9')
	printf("No");
	else
	{
		printf("No");
	}
}
