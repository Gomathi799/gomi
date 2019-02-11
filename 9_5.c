#include<stdio.h>
void main()
{
    char a[100],b[100],c[100];
    int i,j=0,k=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
     if(i%2==0)
     {
         b[j]=a[i];
         j++;
     }
     else
     {
         c[k]=a[i];
         k++;
     }
    }
    for(i=0;i<j;i++)
    printf("%c",b[i]);
    printf("\t");
    for(i=0;i<k;i++)
    printf("%c",c[i]);
}
