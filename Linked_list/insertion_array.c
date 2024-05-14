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
    printf("Enter the data you want to insert: ");
    scanf("%d",&num);
    printf("Enter the position: ");
    scanf("%d",&pos);
    for (i = size-1;  i >= pos;  i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    //size++;
    printf("Elements in array are: ");
    for ( i = 0; i < size+1; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
    