#include<stdio.h>
void main()
{
    int n,min,max=0,i,j,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d ",max);
    min=b[0];
    for(i=1;i<n;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }
    printf("%d",min);
}
