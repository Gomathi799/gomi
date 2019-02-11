#include<stdio.h>
void main()
{
    int r,sum=0,n;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    while(sum)
    {
        r=sum%10;
        printf("%d ",r);
        sum=sum/10;
    }
}
