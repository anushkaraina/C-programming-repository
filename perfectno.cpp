#include<stdio.h>
int main()
{
	int i=1,num,sum=0;
	printf("Enter the number to check perfect number\n");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		sum=sum+1;
		i++;
	}
	if(sum==num)
	{
		printf("\n%d is a perfect number",num);
	}
	else
	{
		printf("\n%d is not a perfect number",num);
	}
}

