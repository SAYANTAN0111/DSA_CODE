#include<stdio.h>

int main()
{
    int n,i,j,flag,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers: \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        int min = i;
        for ( j = i+1; j < n;j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;

            }
            if(min != i)
            {
                temp = arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
            
        }
     
        
    }
    printf("After sorted the list is: \n");
    for ( i = 0; i < n; i++)
    
        printf("%d\n",arr[i]);
    
 return 0; 
    
}