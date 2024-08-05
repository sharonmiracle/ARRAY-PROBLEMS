#include<stdio.h>
void delete_element(int size,int arr[],int location)
{
    for(int ind=location-1; ind<size-1; ind++)
    {
        arr[ind]=arr[ind+1];
    }
}
void main()
{
    int size;
    int location;
    printf("Enter the no. of elements : ");
    scanf("%d", &size);
    int arr[size];
    for(int ind=0; ind<size; scanf("%d",&arr[ind++]));
    printf("Enter the location : ");
    scanf("%d", &location);
    delete_element(size,arr,location);
    printf("The array elements after deletion : ");
    for(int ind=0; ind<size-1; printf("%d ",arr[ind++]));
}
