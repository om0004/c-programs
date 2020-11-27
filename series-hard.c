#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float fact(float);
int main()
{
    float x,n,term,i,d,j=3,sum=0;
    // x-x^3/3!+x^5/5!
    printf("enter value of x:");
    scanf("%f",&x);
    printf("\n enter no of terms:");
    scanf("%f",&n);
    term=x;
    for(i=0;i<n;i++)
    {
    term=-term*pow(x,2);
    d=fact(j);
    sum=sum+(term/d);
    j=j+2;
    }
    printf("%.2f",sum+x);
    return 0;
}
float fact(float x)
{
    int i,pr=1;
    for(i=1;i<=x;i++)
    {
        pr=pr*i;
    }
    return pr;
}
