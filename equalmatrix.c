#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],b[3][3],i,j,count=0;
   for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
     for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
           printf("%d",b[i][j]);
       }
       printf("\n");
   }
     for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
        if(a[i][j]==b[i][j])
        {
            count++;
        }
       }
   }
   if(count==9)
   {
       printf("equal");
   }


    return 0;
}
