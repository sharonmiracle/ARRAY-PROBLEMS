#include<stdio.h>
void insert_element(int size,int arr[],int element,int location)
{
    for(int ind=size; ind>location-1; ind--)
    {
        arr[ind]=arr[ind-1];
    }
    arr[location-1] = element;
}
void main()
{
    int size;
    int element;
    int location;
    printf("Enter the no. of elements : ");
    scanf("%d", &size);
    int arr[size];
    for(int ind=0; ind<size; scanf("%d",&arr[ind++]));
    printf("Enter the element : ");
    scanf("%d", &element);
    printf("Enter the location : ");
    scanf("%d", &location);
    insert_element(size,arr,element,location);
    printf("The array elements after insertion : ");
    size++;
    for(int ind=0; ind<size; printf("%d ",arr[ind++]));
}
