#include<stdio.h>
void main()
{
    int i,j=0,n;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            j=1;
        }
    }
    if(j!=1)
    printf("yes");
    else
    printf("no");
}
