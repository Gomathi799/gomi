#include<stdio.h>
void main()
{
    char a[100];
    int i,j,k=0;
    scanf("%s",&a);
    j=0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
        if(a[i]==a[j])
        {
            k++;
        }
        }
    }
    if(k>0)
    printf("No");
    else
    printf("Yes");
}
