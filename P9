#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in the array : ";
    cin>>n;
    int arr[n];
    int count = 0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe array elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nNo. of duplicate elements in the array = "<<count;

    return 0;
}
