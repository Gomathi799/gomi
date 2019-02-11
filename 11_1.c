#include<stdio.h>
void main()
{
    char a[100];
    int n=0,k,i;
    scanf("%d",&k);
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=n-k;i<n;i++)
    printf("%c",a[i]);
}
