#include<stdio.h>

int selectionsort(int arr[],int n)
{
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key = arr[i];
        j=i-1;
        while(j>0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}
int main()
{
    int i;
    int arr[]={1,2,55,3,44,21,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The unsorted elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    selectionsort(arr,n);
    
    printf("\nThe sorted elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}