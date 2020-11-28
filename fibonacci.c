#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,sum=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }


return 0;
    }



