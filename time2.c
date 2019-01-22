#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        c[i]=a[i]-b[i];
        else if(b[i]>a[i])
        c[i]=b[i]-a[i];
    }
    for(i=0;i<n;i++)
    printf("%d ",c[i]);
}
