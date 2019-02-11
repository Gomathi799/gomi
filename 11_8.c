#include<stdio.h>
void main()
{
    int min,a[100],i,j,k,n,l;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
        min=0;
        for(j=0;j<n;j++)
        {
            if(min<a[i])
            {
                min=a[i];
                l=i;
            }
        }
        a[l]=0;
    }
    printf("%d",min);
}
