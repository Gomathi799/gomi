#include<stdio.h>
void main()
{
    int n,a,d,s=0;
    scanf("%d%d%d",&n,&a,&d);
    while(n)
    {
    s=s+a;
    a=a+d;
    n--;
    }
    printf("%d",s);
}
