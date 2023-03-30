#include<stdio.h>
int main()
{
	int w,h;
	printf("Enter your weight in kg\n");
	scanf("%d",&w);
	printf("Enter your height in m\n");
	scanf("%d",&h);
	float bmi;
	bmi=w/(h*h);
	if (bmi<=18.5)
	{
		printf("You are underweight");
	}
	else if(bmi>=18.5&&bmi<=24.9)
	{
		printf("You have normal weight");
	}
	else if(bmi>=25.0&&bmi<=29.9)
	{
		printf("You are overweight");
	}
	else if(bmi>=30.0)
	{
		printf("You are obese");
	}
	else
	{
		printf("Wrong Input, Try Again!!!");
	}
}
