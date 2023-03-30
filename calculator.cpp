g#include<stdio.h>
int main()
{

	int a,b;
	char m;
	printf("What mathematical operation do you want perform?\n");
	printf("+,-,*,/\n");
	scanf("%c",&m);
	printf("Enter first number:\n");
	scanf("%d",&a);
    printf("Enter second number:\n");
	scanf("%d",&b);
	
	if (m=='+')
	{
	
		int d;
		d=a+b;
		printf("sum=%d",d);
	}
	else if (m=='-')
	{

		if(a>b)
		{
		int e;
		e=a-b;	
		printf("Difference is %d",e);
		}
		else
		{
		    int f;
			f=b-a;
			printf("Difference is %d",f);
		}
		
	}
	else if (m=='*')
	{
    
	int g;
	g=a*b;
	printf("Product is %d",g);
	}
	else if (m=='/')
	{
		float h;
		h=a/b;
		printf("Division is %f",h);
		
		
	}
	else
	{
		printf("Error, Try again");
	}
}

