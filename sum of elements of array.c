#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]={1,2,3},sum=0,i;
    for(i=0;i<=2;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
