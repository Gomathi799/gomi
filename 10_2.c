#include<stdio.h>
void main()
{
    int n,a[100],s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}
