#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],i,j,small=9;
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<=2;i++)
    {
        small=9;
        for(j=0;j<=2;j++)
        {
        small=small>a[i][j]?a[i][j]:small;
        }
        printf("\n%d",small);
    }
    return 0;
}
