#include<stdio.h>
void main()
{
    int l,w,h,s,v;
    scanf("%d%d%d",&l,&w,&h);
    s=2*l*w+2*l*h+2*h*w;
    v=l*w*h;
    printf("%d %d",s,v);
}
