#include<stdio.h>
void main()
{
    int a[100],i,k,n,j,b[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    j=1;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("%d",b[k]);
}
