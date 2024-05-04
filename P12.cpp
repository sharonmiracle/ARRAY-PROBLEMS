#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"The array elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int k;
    cout<<"\nEnter the k'th element to be swapped : ";
    cin>>k;
    
    int temp;
    temp = arr[k-1];
    arr[k-1] = arr[n-k];
    arr[n-k] = temp;
    cout<<"\nArray after swapping k'th element : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
