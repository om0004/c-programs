#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,k,z;
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
    printf("\n\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=2;k<=a[i][j];k++)
            {
                if(a[i][j]%k==0)
                {

                    break;
                }

            }
            if(k==a[i][j])
            {

              for(z=0;z<=2;z++)
              {

                printf("%d ",a[i][z]);
            }
            printf("\n");
            break;

        }
    }}

    return 0;
}
