#include<stdio.h>
int main()
{
	int arr[50];
	int i,num, elem;
	printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
    
    for (i = 0; i < num; i++ )  
    {   printf ("Enter %d element in array: ", i+1);  
        scanf (" %d", &arr[i]);  
    } 
	printf("Enter the element you want to check");
	scanf("%d",&elem);
	for (i=0;i<num;i++)
	{
		if (elem==arr[i])
		{
			printf("The element is present in the array");
			break;
		}
		else
		{
		    printf("The element in not present in the array");	
		    break;
		}
	} 
}
