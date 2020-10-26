#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[3][3],i,j,large=0;
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
        large=large>a[i][j]?large:a[i][j];
      }
      printf("\n%d",large);
      large=0;
  }


    return 0;
}
