#include<stdio.h>
int main()
{
	int x,sum=0,m;
	printf("Enter the integer number\n");
	scanf("%d",&x);
	printf("The sum of digits=");
	while(x>0)
	{
		m=x%10;
		sum=sum+m;
		x=x/10;
	}
	printf("%d\n",sum);
	
	
	
}
