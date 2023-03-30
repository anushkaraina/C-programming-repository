#include<stdio.h>
int main()
{
	float k,x;
	printf("Enter distance covered at the beginning of the month:");
	scanf("%f",&k);
	printf("Enter the additional distance covered at the end of the month:");
	scanf("%f",&x);
	float a;
	a=(k+x)*0.6214;
	printf("Total miles covered=%f\n",a);
	int m;
	printf("Enter the mileage of your vehicle in kmpl:");
	scanf("%d",&m);
	float r;
	printf("Enter cost of 1 litre petrol:");
	scanf("%f",&r);
	float d,fuelprice;
	d=k+x;
	fuelprice=(m/d)*r;
	printf("Total amount spent on fueling of vehicle=%f",fuelprice);
}
