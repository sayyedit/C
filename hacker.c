#include<stdio.h>
int main()
{
    int n;
    int a[300];
    printf("Enter the number of triangles : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the Side of %d traingle: ",i);
        for(int j=0;j<3;j++){
            scanf("%d",&a[j]);
        }
    }

}