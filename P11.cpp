#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    int even = 0;
    int odd = 0;
    
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
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
            even+=arr[i];
        else
            odd+=arr[i];
    }
    cout<<"\nThe sum of even elements = "<<even;
    cout<<"\nThe sum of odd elements = "<<odd;
    
    return 0;
}
