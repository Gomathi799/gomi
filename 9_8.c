#include<stdio.h>
void main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    if(n>m)
    i=n;
    else
    i=m;
    while(1)
    {
        if(i%n==0&&i%m==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    
}
