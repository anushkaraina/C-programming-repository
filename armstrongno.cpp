#include<stdio.h>
#include<math.h>
int main()
{
	int n, copyofn1, copyofn2, sum=0, r, digits=0;
	printf("Enter any number");
	scanf("%d",&n);
	copyofn1=n;
	copyofn2=n;
	while(n!=0)
	{
		r=n%10;
		digits=digits+1;
		n=n/10;
	}
	while(copyofn1!=0)
	{
		r=copyofn1%10;
		sum=sum+pow(r,digits);
		copyofn1=copyofn1/10;
	}
	if(copyofn2==sum)
	{
		printf("Number is armstrong");
	}
	else
	{
		printf("Number is not armstrong");
	}
}
