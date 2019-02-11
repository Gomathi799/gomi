#include<stdio.h>
void main()
{
    char a[100];
    int n,i,k=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            k++;
        }
    }
    if(k==n)
    printf("yes");
    else
    printf("no");
}
