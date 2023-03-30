#include<stdio.h>
int main()
{
	int score1,score2,score3;
	printf("Enter runs score in three matches:\n");
	scanf("%d%d%d",&score1,&score2,&score3);
	float avg;
	avg=(score1+score2+score3)/3;
	printf("The average runs scored by player=%f",avg);
}
