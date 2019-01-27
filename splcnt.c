#include<stdio.h>
void main()
{
    char a[100];
    int i,c=0,n;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]==' '))
        {
            c++;
        }
    }
    printf("%d",n-c);
}
