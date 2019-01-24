#include<stdio.h>
void main()
{
    char a[100],b;
    int i,t;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
           b=a[i];
           a[i]=a[i+1];
           a[i+1]=b;
        }
        printf("%c",a[i]);
    }
}
