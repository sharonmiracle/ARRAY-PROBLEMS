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
    
    int key;
    cout<<"\n\nEnter the key value : ";
    cin>>key;
    
    vector<int> v;
    int t = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            t = 1;
            v.push_back(i);
            break;
        }
    }
    if(t==0) v.push_back(-1);
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==key)
        {
            t = 1;
            v.push_back(i);
            break;
        }
    }
    if(t==0) v.push_back(-1);
        
    cout<<"\nThe indices are : ";
    for(int j : v)
    {
        cout<<j<<" ";
    }
    
    return 0;
}
