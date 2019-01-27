#include<stdio.h>
void main()
{
    char a[100];
    int i,c=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            c++;
        }
    }
    printf("%d",c);
}
