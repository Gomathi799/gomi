#include <stdio.h>
 
void main()
{
  int n,i,a[10];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
      if(a[i]!=i)
      {
          printf("%d ",i);
          break;
      }
  }
}
