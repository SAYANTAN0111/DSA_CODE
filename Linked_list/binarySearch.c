#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    //int n;

    int arr[100] ;
    int size = sizeof(arr)/sizeof(int);
    int element;
    int i;
    printf("Enter number of elements: \n");
    scanf("%d",&size);

    printf("Enter %d integers: \n",size);
    for(i = 0; i < size; i++)
    scanf("%d",&arr[i]);

    
   
     printf("Enter the elemet which you want to found:\n");
     scanf("%d",&element);
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d is found at index %d \n", element, searchIndex);
    return 0;
}