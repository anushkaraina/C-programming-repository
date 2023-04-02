#include<stdio.h>
int main()
{
	float n;
	printf("Enter value in dollars:");
	scanf("%f",&n);
	float m;
	m=(n*82.62);
	printf("Value in rupees=%f\n",m);
	float a;
	printf("Enter value in rupees:");
	scanf("%f",&a);
	float b;
	b=a*0.01209;
	printf("Value in dollars=%f",b);
}
