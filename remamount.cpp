#include<stdio.h>
int main()
{
	int n,m,x;
	printf("Enter the total amount you had initially:\n");
	scanf("%d",&n);
	printf("Enter the number of people to whom you distributed the amount:\n");
	scanf("%d",&m);
	printf("Enter the amount you gave to each person:\n");
	scanf("%d",&x);
	int d;
	d=x*m;
	int rem_amount;
	rem_amount=n-d;
    printf("The remaining amount left with you = %d\n",rem_amount);	
}
