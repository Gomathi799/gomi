#include<stdio.h>
void main()
{
    int n,l,r,i,k=0;
    scanf("%d%d%d",&n,&l,&r);
    for(i=l+1;i<r;i++)
    {
        if(i==n)
        {
            k++;
        }  
    }
    if(k>0)
    printf("yes");
    else
    printf("no");
}
