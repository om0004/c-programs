#include <stdio.h>
#include <stdlib.h>
/* sum of prime numbers between 1 and 200.*/

int main()
{
int i,j,sum=0,count=0;
for(i=1;i<200;i++)
{

    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            break;
        }

    }
    if(i==j)
    {

        sum=sum+i;
        count++;
    }
}
printf("sum=%d\ncount=%d",sum,count);
    return 0;
}
