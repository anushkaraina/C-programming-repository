#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	int z,i=1;
	z=n*i;
	while (i<=10)
	{
		
		printf("%d*%d=%d",n,i,z);
	}
	
}
