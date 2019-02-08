#include<stdio.h>
void main()
{
    char a[100];
    int n=0,i,c;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    n++;
    c=n/2;
    if(n%2==0)
    {
        a[c]='*';
        a[c-1]='*';
    }
    else
    {
        a[c]='*';
    }
    for(i=0;i<n;i++)
    printf("%c",a[i]);
}
