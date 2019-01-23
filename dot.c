#include<stdio.h>
void main()
{
    char a[100];
    int n=0,i;
    gets(a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    a[n]='.';
    for(i=0;i<=n;i++)
    printf("%c",a[i]);
}
