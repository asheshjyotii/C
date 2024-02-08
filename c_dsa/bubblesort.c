#include<stdio.h>
void bubblesort(int arr[],int n)
{
    int i,temp,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n = 6,i;
    int arr[]={1,4,17,6,9,3,5};
    printf("The sorted array:\n");
    bubblesort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}