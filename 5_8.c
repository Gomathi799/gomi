#include<stdio.h>
void main()
{
    int n,a[100],i,c=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    b=c/n;
    printf("%d",b);
}
