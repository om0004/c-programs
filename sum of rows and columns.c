#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],c[3][3],i,j;
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
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j]+a[j][i];
        }
    }
    printf("\n\n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }

        printf("\n");
    }
    return 0;
}
