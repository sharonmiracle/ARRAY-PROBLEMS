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
        bool isDuplicate = false;
        for(int j=0;j<i;j++) 
        {
            if(arr[i] == arr[j]) 
            {
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate) 
        {
            continue; 
        }
        for(int j=i+1;j<n;j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nTotal no. of duplicate elements found in array = " <<count;

    return 0;
}
