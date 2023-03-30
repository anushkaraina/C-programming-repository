#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf("The table of %d is:\n",n);
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("%d\n",m);
	}
	return 0;
}
