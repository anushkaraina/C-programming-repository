#include <stdio.h>  
  
int main() 
{  
   int arr[50];  
   int item, i, num, j=0 ;  
   printf (" \n Enter the number of elements in an array: \n ");  
   scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
      
 
    for (i = 0; i < num; i++ )  
    {   printf ("Enter %d element in array: ", i+1);  
        scanf (" %d", &arr[i]);  
    }  
    printf("The array is as:\n");
    for(i=0;i<num;i++)
    {
    	printf("%d\n",arr[i]);
	}
    printf("Enter the element to be searched: ");
	scanf("%d",&item);
	printf("\nElement to be searched = %d\n", item);  
    while( j < num){  
      if( arr[j] == item )
	   {  
         printf("\nElement %d is found at %d position", item, j+1);  
		 break;  
       } 
      else
      {
      	printf("Element not found");
      	break;
	  }
	  j = j + 1;  
      
   }  
}  
