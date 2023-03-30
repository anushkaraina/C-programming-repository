#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter no. to check prime no. or not\n");
	scanf("%d",&n);
	i=2;
	while(i<=n/2)
	{
		if (n%i==0)
		{
			count=1;
			break;
		}
		i++;
	}
	if(count==0)
	printf("%d is a prime no.",n);
	else
	{
		printf("%d is not a prime no.",n);
	}
}
