#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[8],i,j,count=0,k;
   for(k=0;k<8;k++)
   {
       scanf("%d",&a[k]);
   }
   for(j=0;j<8;j++)
   {

   for(i=j+1;i<8;i++)
   {
       if(a[j]==a[i])
       {
           count++;
           break;

       }
   }
   }
   printf("%d",count);
       return 0;
}
