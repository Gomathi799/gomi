#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    while(n)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
        printf("%d",n);
        break;
        }
    }
}
