#include<stdio.h>
void main()
{
    char a[100];
    int i,n;
    gets(a);
    scanf("%d",&n);
    while(n)
    {
        puts(a);
        n--;
    }
}
