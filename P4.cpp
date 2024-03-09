#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    
    // getting array values from the user
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // printing array values
    cout<<"The array elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int x;
    cout<<"\n\nEnter the value of x : ";
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= x)
        {
            count+=1;
        }
    }
    cout<<"\nThe Count of smaller elements is : "<<count;
    return 0;
}
