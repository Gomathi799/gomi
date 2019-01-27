#include<stdio.h>
void main()
{
    int a,i=0;
    scanf("%d",&a);
    while(a)
    {
        a=a/10;
        i++;
    }
    printf("%d",i);
}
