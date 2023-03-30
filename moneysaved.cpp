#include<stdio.h>
int main()
{
	int x,n;
	printf("For how many months did Yuvan saved money?:\n");
	scanf("%d",&n);
	printf("Enter the amount saved each month:Rs.");
	scanf("%d",&x);
	int d;
	d=x*n;
	printf("The amount that Yuvan saved after %d months=Rs.%d",n,d);
}
