#include <stdio.h>
#include <stdlib.h>
int fac(int);
//1!+2+3!+4....
int main()
{
    int n,i=1,d,sum=0,su=0;
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==1)
        {


      d=fac(i);
      sum=sum+d;
      printf("%d!",i);
      i++;
      if(i<=n)
      {
          printf("+");
      }
      }
      else
      {
          su=su+i;
          printf("%d",i);
          i++;
           if(i<=n)
      {
          printf("+");
      }
      }


    }
    printf("=%d",su+sum);


    return 0;
}
int fac(int x)
{
    int i,pr=1;
    for(i=1;i<=x;i++)
    {

        pr=pr*i;
    }
    return pr;
}
