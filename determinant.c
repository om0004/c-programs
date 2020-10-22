#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,c,d,e;
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
    }
    c=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    d=a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    e=a[0][2]*(a[2][1]*a[1][0]-a[2][0]*a[1][1]);
    printf("\n%d",c+e-d);
    return 0;
}
