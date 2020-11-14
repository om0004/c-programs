#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0,d,e=0,z,i;
    scanf("%d",&z);
    a=z*z;
    for(i=0;i<=1;i++)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    while(c>0)
    {
        d=c%10;
        e=e*10+d;
        c=c/10;
    }
    printf("\n\n%d=",e);
    if(e==z)
    {
        printf("automorph");
    }
    else{
        printf("\n not");
    }
    return 0;
}
