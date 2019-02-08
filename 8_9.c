#include<stdio.h>
void main()
{
    int a,b,c,i,k=0;
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=2;i<=c/2;i++)
    {
        if(i*i==c)
        {
            k=1;
        }
    }
    if(k==1)
    printf("yes");
    else
    printf("no");
}
