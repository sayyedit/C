#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    char remove;
    gets(c);
    scanf("%c",&remove);
    puts(c);
    printf("%c",remove);
    return 0;
}