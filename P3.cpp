#include <iostream>
#include <vector>
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
    
    // printing alternate array values
    cout<<"\nThe alternate array elements are : ";
    for(int i=0;i<n;i+=2)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
