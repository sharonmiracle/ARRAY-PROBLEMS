#include<stdio.h>
int main()
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
    
    for(int left_rot=1;left_rot<=rot_count;left_rot++) // n units  [n*n=n^2]
    {
        temp=arr[0];                                  // 1 unit
        for(int ind=0; ind<size-1; ind++)             // n units
            arr[ind]=arr[ind+1];                      // 1 unit
        arr[size-1]=temp;                             // 1 unit
    }
    
    for(int ind=0; ind<size; printf("%d ", arr[ind++]));
    return 0;
}
