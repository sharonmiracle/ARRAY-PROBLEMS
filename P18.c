#include<stdio.h>
void reverse(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void main()
{
    int size;
    int rot_count;
    int temp;
    printf("Enter the no. of elements : ");
    scanf("%d", &size);
    int arr[size];
    for(int ind=0; ind<size; scanf("%d",&arr[ind++]));
    printf("Enter rotation count : ");
    scanf("%d", &rot_count);
    
    reverse(arr,0,rot_count);
    reverse(arr,rot_count+1,size-1);
    reverse(arr,0,size-1);
    
    for(int ind=0; ind<size; printf("%d ", arr[ind++]));
}
