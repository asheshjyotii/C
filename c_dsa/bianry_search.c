#include<stdio.h>
int main()
{
    int i,n=10,arr[n],search;
    printf("Enter 10 elements in ascending order\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d",&search);
    int first =0,last=9,middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
        {
            first = middle+1;
        }
        else if (arr[middle]==search)
        {
            printf("found element %d at position %d",search,middle+1);
            break;
        }
        else
        {
            last = middle-1;
        }
        middle = (first+last)/2;
    }
    if(first>last)
    {
        printf("not found\n");
    }
}