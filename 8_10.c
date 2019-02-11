#include<stdio.h>
void main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r%2!=0)
        {
         printf("%d ",r);   
        }
        n=n/10;
    }
}
