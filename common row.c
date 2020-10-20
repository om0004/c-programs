#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],i,j,count=0,cat=0,dog=0;
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



        for(j=0;j<=2;j++)
        {
            if(a[0][j]==a[1][j])
            {
                count++;
            }
        }

        for(j=0;j<=2;j++)
        {
            if(a[0][j]==a[2][j])
            {
                dog++;
            }
        }
        for(j=0;j<=2;j++)
        {
            if(a[1][j]==a[2][j])
            {
                cat++;
            }
        }
    if(count==3)
       {
           printf("%d %d %d",a[0][0],a[0][1],a[0][2]);
       }
         else if(dog==3)
       {
           printf("%d %d %d",a[0][0],a[0][1],a[0][2]);
       }
   else if(cat==3)
       {
           printf("%d %d %d",a[1][0],a[1][1],a[1][2]);
       }
    return 0;
}
