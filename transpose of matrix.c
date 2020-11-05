#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],i,j,z[3][3],c;
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
            z[i][j]=0;
        }
    }
         for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            z[i][j]=a[j][i];

        }
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",z[i][j]);

        }
        printf("\n");

}
return 0;
    }
