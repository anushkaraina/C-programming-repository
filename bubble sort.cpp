#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int i,j,arr[n],c,flag=0;
	for(i=0;i<n;i++)
	{
		printf("Enter the elements");
		scanf("%d",&arr[j]);
	}
	for(i=0;i<n-1;i++)
	{
		flag=0;
	}
	for(j=0;j<n-1-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			c=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=c;
			flag=1;
		}
	}
	if (flag==0)
	{
		printf("Swapping done");
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
