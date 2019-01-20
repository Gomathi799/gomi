#include<stdio.h>
void main()
{
    long int n,m=0;
    scanf("%ld",&n);
    while(n)
    {
      m++;
      n=n/10;  
    }
    printf("%d",m);
}
