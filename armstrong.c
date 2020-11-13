#include <stdio.h>
#include<math.h>
int main()
{
  int a,b,e,count=0,sum=0,c,d;
  scanf("%d",&a);
  b=a;
  e=a;
  while(a>0)
  {
    a=a/10;
    count++;
  }
  while(b>0)
  {
    c=b%10;
    d=pow(c,count);
    sum=sum+d;
    b=b/10;
  }
  if(sum==e)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
    return 0;
}
