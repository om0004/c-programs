#include <stdio.h>
#include <stdlib.h>
//1^2+3^2...
int main()
{
    int sum=0,n,d,i=1,c;
    printf("enter number of terms:");
    scanf("%d",&n);
    d=n*2;

 while(i<=d)
  {
    c=i*i;
    sum=sum+c;
    printf("%d^2",i);
    i=i+2;
    if(i<=d)
    printf("+");
  }
  printf("=%d",sum);
    return 0;
}
