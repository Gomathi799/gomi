#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d",b);
    for(i=0;i<n-1;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
    }
}
