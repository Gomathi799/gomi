#include<stdio.h>
void main()
{
    int a,b,i,j,n,l=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            n=0;
            if(i%j==0)
            {
                n=1;
                break;
            }
        }
        if(n!=1)
        {
          l++;
        }
    }
    printf("%d",l);
}
