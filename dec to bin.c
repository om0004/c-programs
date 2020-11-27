#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int dec,rem,bin=0,i=0;
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%2;
        bin=bin+rem*pow(10,i);0
        dec=dec/2;
        i++;
    }
    printf("%d",bin);
    return 0;
}
