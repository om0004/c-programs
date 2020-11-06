#include <stdio.h>
#include <stdlib.h>
//1x2+2x3+3x4....
int main()
{
    int sum=0,n,d,i=1,c;
    printf("enter number of terms:");
    scanf("%d",&n);


 while(i<=n)
  {
    c=i*(i+1);
    sum=sum+c;
    printf("%dX%d",i,i+1);
    i=i+1;
    if(i<=n)
    printf("+");
  }
  printf("=%d",sum);
    return 0;
}
