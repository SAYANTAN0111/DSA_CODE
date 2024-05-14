#include<stdio.h>
int main()
{
    int a[50],size,i,num,pos;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("From which position you want to delete: ");
    scanf("%d",&pos);
    if (pos<=0 || pos>size)
    {
        printf("Invaid Position!!");
    }
    else
    {
        for ( i = pos-1; i < size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;    
    }
      printf("Elements in array are: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}
    