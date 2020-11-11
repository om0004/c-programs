#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,c=0,d=0;
   printf("enter amount:");
   scanf("%d",&a);
   if(a>1000)
   {
       b=a/1000;
       a=a-(b*1000);
   }
   if(a>500)
   {
       c=a/500;
       a=a-(c*500);
   }
   if(a>100)
   {
       d=a/100;
       a=a-(d*100);
   }
   printf("1000=%d\n500=%d\n100=%d",b,c,d);
    return 0;
}
