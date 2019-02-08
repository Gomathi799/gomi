#include<stdio.h>
void main()
{
    char a[100];
    int n=0,k=0,i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0'||a[i]=='1')
        {
            k++;
        }
    }
    if(k==n)
    printf("yes");
    else
    printf("no");
}
