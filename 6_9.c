#include<stdio.h>
void main()
{
    int n,m=0;
    scanf("%d",&n);
    while(n)
    {
        m++;
        n=n/10;
    }
    printf("%d",m);
}
