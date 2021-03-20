#include<stdio.h>
int a[] ={12,34,5,636,245,2,2,2,2,2,676,9};
int start=0, end=11;
int first(int n)
{
    int result=-1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(a[mid] == n){
            result = mid;
            end = mid-1;    
        }
        else if (a[mid]>n)
        {
            end= mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return result;
}
int last(int n)
{
    int result = -1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(a[mid] == n){
            result = mid;
            start = mid+1;
        }
        else if (a[mid]>n)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return result;
    
}
int main()
{
    int f, l,n;
    printf("Enter the element you want to search #of count : ");
    scanf("%d",&n);
    f=first(n);
    l = last(n);
    printf("#of occurence of %d = %d", n,(l-f+1));
    return 0;
}