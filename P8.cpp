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
    
    int temp[n];
    int rev;
    int rem;
    for(int i=0;i<n;i++)
    {
        temp[i] = arr[i];
    }
        
    for(int i=0;i<n;i++)
    {
       rev = 0;
       while(temp[i]>0)
       {
           rem=temp[i]%10;
           rev=(rev*10) + rem;
           temp[i] = temp[i]/10;
       }
       if(rev!= arr[i])
       {
           cout<<"\nThe array elements are not palindrome.";
           return 0;
       }
    }
    cout<<"\nThe array elements are palindrome.";
    return 0;
}
