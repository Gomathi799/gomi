#include<stdio.h>
void main()
{
    int a,b,c,e=0,p,d,l=0,r,x,y,i;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        a=i;    
        b=i;
        c=i;
        l=0;
        e=0;
        while(a)
        {
            a=a/10;
            l++;
        }
        while(b)
        {
            p=1;d=l;
            r=b%10;
            while(d)
            {
                p=p*r;
                d--;
            }
            e=e+p;
            b=b/10;
        }
        if(c==e)
        printf("%d",e);
        }
}
