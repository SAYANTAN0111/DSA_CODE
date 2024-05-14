#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the no of interger: ";
    cout<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"After sorting: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}









