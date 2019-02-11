#include<stdio.h>
void main()
{
    int a,b;
    char sym;
    scanf("%d%c%d",&a,&sym,&b);
    if(sym=='/')
    printf("%d",a/b);
    else
    printf("%d",a%b);
    
}
