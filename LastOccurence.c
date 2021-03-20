#include<stdio.h>
int main()
{
    int ar[] ={1,2,3,4,5,6,6,6,7,8,9};
    int start=0;
    int end=10;
    int e, res=-1;
    printf("Enter the element you want to search : ");
    scanf("%d",&e);
    while (start<=end)
    {  
        int mid = start + (end-start)/2;
        if(ar[mid] == e)
        {
            res = mid;
            start = mid+1;     
        }
        else if (ar[mid]>e)
        {
            end=mid-1;
        }
        else{
            start = mid+1;
        }
    }
    printf("Last occurence at index %d\n", res);
    return 0;
}