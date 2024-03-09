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
    
    int add = 0;
    for(int i=0;i<n;i++)
	{
	    add = add + arr[i];
	}
    cout<<"\nThe sum of array elements is : "<<add;
    return 0;
}
