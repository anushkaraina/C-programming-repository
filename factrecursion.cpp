#include<stdio.h>
int func (int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*func(n-1);
	}
}
	int main()
	{
		int n;
		printf("Enter any number\n");
		scanf("%d",&n);
		func(n);
		printf("%d",func(n));
	}
u
