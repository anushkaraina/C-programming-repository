#include<stdio.h>
int main()
{
 int i,j;
 float salary,bonus;
 char gender;
 printf("Enter M for Male and F for Female\n");
 scanf("%c",&gender);
 printf("Enter Salary\n");
 scanf("%f",&salary);
 if(gender=='M' || gender=='m')
 {
  if(salary>10000)
  {
   bonus=(salary*0.05);
  }
  
  else
  {
  	bonus=(salary*0.07);
  }
  
 }
 if(gender=='F' || gender=='f')
 {
  if(salary>10000)
  {
  	 bonus=(salary*0.1);
  }
  else
  {
    bonus=(salary*0.12);
  }
 }
 salary=salary+bonus;
 printf("Bonus=%f\nSalary=%f\n",bonus,salary);
}
