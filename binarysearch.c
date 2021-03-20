#include<stdio.h>
int main()
{
    int ar[10] ={1,2,3,4,5,6,7,8,9};
    int start=0;
    int end=8;
    int e;
    printf("Enter the element you want to search : ");
    scanf("%d",&e);
    while (start<=end)
    {  
        int mid = start + (end-start)/2;
        if(ar[mid] == e)
            return(printf("%d\n", mid));
        else if (ar[mid]>e)
        {
            end = mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return (printf("%d", -1));
}