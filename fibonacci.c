#include<stdio.h>
int fibo(int n)
{
    if(n==0 ||n==1)
        return n;
    else if(n==2)
        return 2;
    else
        return n*fibo(n-1);
}
int main()
{
    int num,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result = fibo(num);
    printf("Result = %d", result);
    return 0;
}