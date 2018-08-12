#include <stdio.h>
#include<math.h>
int main(void) {
int n,m,i;
scanf("%d %d",&n,&m);
for(i=n;i<m;i++)
{
	int t,rem,sum=0;
	t=i;
	while(t!=0)
	{
	rem=t%10;
	sum=sum+rem*rem*rem;
	t=t/10;
	}
	if(sum==i)
	{
		printf("%d\n",sum);
		
	}
	else
	continue;
}

	return 0;
}
