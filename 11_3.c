#include<stdio.h>
void main()
{
    char a[100];
    int i;
    scanf("%[^\n]",&a);
    if(a[0]>=97&&a[0]<=122)
    a[0]=a[0]-32;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]>=97&&a[i+1]<=122)
            {
                a[i+1]=a[i+1]-32;
            }
        }
        printf("%c",a[i]);
    }
}
