#include<stdio.h>
void main()
{

    char a[100];
    int i,n=0,flag=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=0;i<n;i++)
    {
        if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))&&(a[i]>=0&&a[i]<=9))
        flag=1;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    
}
