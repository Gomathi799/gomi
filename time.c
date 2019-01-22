#include<stdio.h>
void main()
{
    int t,r,q;
    scanf("%d",&t);
    r=t%60;
    q=t/60;
    printf("%d %d",q,r);
}
