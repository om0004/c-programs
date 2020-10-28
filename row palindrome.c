#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,c,rev=0;
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
            c=a[i][j];
            while(c>0)
            {
                rev=rev*10+c%10;
                c=c/10;
            }
            if(rev==a[i][1]||rev==a[i][2])
            {
                printf("\nrow %d is palindrome",i);
                    rev=0;
                break;
            }

        }
    }
    return 0;
}
