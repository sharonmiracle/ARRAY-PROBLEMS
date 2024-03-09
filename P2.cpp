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
    
    vector<int> v;
    // checking whether array values are equal to their indices
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i+1)
        {
            v.push_back(arr[i]);
        }
    }
    
    // printing array values which are equal to their indices
    cout<<"\nThe array elements having its value equal to index value are : ";
    for(int j : v)
    {
        cout<<j<<" ";
    }
    return 0;
}
