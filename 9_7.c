#include<stdio.h>
void main()
{
    int a,b,i,m;
    scanf("%d%d",&a,&b);
    if(a<b)
    m=a;
    else
    m=b;
    for(i=m;i>0;i++)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}
