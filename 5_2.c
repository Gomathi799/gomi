#include<stdio.h>
void main()
{
    char a[100],b[100];
    int s1=0,s2=0,i;
    gets(a);
    gets(b);
    for(i=0;a[i]!=NULL;i++)
    {
        s1=s1+a[i];
    }
    for(i=0;b[i]!=NULL;i++)
    {
        s2=s2+b[i];
    }
    if(s1>s2)
    puts(a);
    else
    puts(b);
}
