#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,n=0,k=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
    b[i]=a[j];
    j++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            k++;
        }
    }
    if(k==n)
    printf("yes");
    else
    printf("no");
}
