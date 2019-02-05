#include<stdio.h>
void main()
{
    int a[100],i,n,k,m=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            m=1;
        }
    }
    if(m==1)
    printf("yes");
    else
    printf("no");
}
