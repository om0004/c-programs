#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int dn,rem,q,d=0,m,l;
   int i=1,j,temp;
   char s;
   scanf("%ld",&dn);
   q=dn;
   for(l=q;l>0;l=l/10)
   {
       temp=l%16;
       if(temp<10)
       {
           temp=temp+48;
       }
           else
           {
               temp=temp+55;
           }

   }
   for(m=d;m>0;m=m/100)
   {

       s=m%100;
       printf("%c",s);
   }

    return 0;
}
