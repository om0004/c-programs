#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],i,j,sum=0;
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nsum=%d",sum);

    return 0;
}
