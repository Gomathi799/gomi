#include<stdio.h>
void main()
{
    char a[100];
    int n,k,i;
    scanf("%[^\n]",&a);
    scanf("%d",&k);
    for(i=0;a[i]!='0';i++);
    n=i;
    for(i=0;i<k;i++)
    printf("%c",a[i]);
}
