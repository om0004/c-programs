#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int dec(int);

int main()
{
    int a,c;
   scanf("%d",&a);
   c=dec(a);
   printf("%d",c);
    return 0;
}
int dec(int a)
{
    int rem,bn=0,i=0;

    while(a>0)
    {
        rem=a%2;
        bn=bn+rem*pow(10,i);
        a=a/2;
        i++;
    }
    return bn;
}
