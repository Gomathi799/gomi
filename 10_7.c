#include<stdio.h>
void main()
{
    int n,s=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
}
