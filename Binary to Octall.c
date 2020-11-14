#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long a,count=0,c,i=0,d,b=0,z,h,rev=0,revv=0,x;
   scanf("%ld",&a);
   c=a;
   while(a>0)
   {
       a=a/10;
       count++;
   }
       while(c>0)
       {
           d=c%10;
           if(d!=0 && d!=1)
           {
               printf("-1");
               goto home;
           }
       b=b+d*pow(2,i);
       c=c/10;
       i++;
   }
printf("decimal= %d",b);
   while(z>0)
   {
    z=b/8;
   h=b%8;
   rev=rev*10+h;
   b=z;
   }
   while(rev>0)
   {
      x=rev%10;
      revv=revv*10+x;
      rev=rev/10;
   }
   printf("\n octal=%ld",revv);
home:
    return 0;
}
