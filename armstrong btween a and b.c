#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,b,i,s,e,d,sum=0,count=0,g;
   scanf("%d%d",&a,&b);
   a=10;
   i=a;

   for(i=a;i<=b;i++)
   {
       s=i;
       g=i;
       while(g>0)
       {
           g=g/10;
           count++;
       }
    while(s>0)
    {
       e=s%10;
       d=pow(e,count);
       sum=sum+d;
       s=s/10;
    }
    if(sum==i)
    {
        printf(" %d ",i);
    }
    sum=0;
    count=0;
   }
    return 0;
}
