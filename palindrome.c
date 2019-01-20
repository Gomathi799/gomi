#include<stdio.h>
void main()
{
    int m,n,r,s=0;
    scanf("%d",&m);
    n=m;
    while(m)
    {
        r=m%10;
        s=s*10+r;
        m=m/10;
    }
    if(n==s)
    printf("yes");
    else
    printf("no");
}
