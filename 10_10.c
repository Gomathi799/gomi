#include<stdio.h>
void main()
{
    long int n,r,s=1;
    scanf("%ld",&n);
    while(n)
    {
        r=n%10;
        s=s*r;
        n=n/10;
    }
    printf("%ld",s);
}
