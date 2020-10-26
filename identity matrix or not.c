#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,dog=0,count=0;
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            {

                if(a[i][j]==1)
                {
                    count++;
                }
            }
            else
            {

                if(a[i][j]==0)
                {
                    dog++;,
                }
            }

        }
    }
    if(count==3 && dog==6)
    {
     printf("identity");
    }

    return 0;
}
