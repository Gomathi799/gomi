#include<stdio.h>
void main()
{
    int n,a[100],i,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        }
    }
    a[n]='\0';
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
