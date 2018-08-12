#include <stdio.h>
 
int main(void) {
	int a;
	printf("Enter A Number\n");
	scanf("%d",&a);
	if(a<0)
	printf("Invalid");
	else
	 (a%2==0)?printf("Even"):printf("Odd");
	 
	
		
}
	
