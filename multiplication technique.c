#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=0,rem,c,f[100],j;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("\n                  %d",a);
    printf("\nX");
    printf("                 %d",b);
    printf("\n----------------------------");
    c=b;
    while(c>0)
    {
        rem=c%10;
        f[i]=a*rem;
        f[1]=f[1]*10;
        printf("\n%d x %d  is    %d",rem,a,f[i]);
        i++;
        c=c/10;
    }
    printf("\n------------------------------------");
printf("\n sum is %d",f[0]+f[1]);

    return 0;
}
