#include<stdio.h>
int main()
{
	int n;
	printf("Enter units consumed");
	scanf("%d",&n);
	if (n<=100)
	{
		float m;
		m=n*2.50;
		printf("Electricity bill=%f",m);
	}
	else if(n>=100&&n<=200)
	{
		int p;
		p=n-100;
		float o;
		o=250+(p*3.50);
		printf("Your electricity bill=%f",o);
	}
	else if(n>=200&&n<=300)
	{
		int z;
		z=n-200;
		float x;
		x=4.50*z+(2.50*100+3.50*100);
		printf("Your electricity bill=%f",x);
	}
	else if (n>300)
	{
		int w;
		w=n-300;
		float q;
		q=5.50*w+4.50*100+3.50*100+2.50*100;
		printf("Your electricity bill=%f",q);
	}
	else
	{
		printf("BOHOT ZYADA BILL HAI, LOAN LELO");
	}
}
