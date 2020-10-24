#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[5],temp[100]={0},i;
   for(i=0;i<=4;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<=4;i++)
   {
       temp[a[i]]=temp[a[i]]+1;
   }
   for(i=0;i<=4;i++)
   {
       if(temp[a[i]]>1)
       {
           printf("\nfrequency of %d =%d",temp[a[i]],temp[a[i]]);
           temp[a[i]]=0;
       }
   }

    return 0;
}
