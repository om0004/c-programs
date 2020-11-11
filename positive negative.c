#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,p=0,n=0;
   do
   {
       scanf("%d",&a);
       if(a==0)
       {
           break;
       }
       if(a>0)
       {
           p++;
       }
       if(a<0)
       {
           n++;
       }
   }while(1);
   printf("positive=%d\nnegative=%d",p,n);
    return 0;
}
