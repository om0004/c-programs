#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num,first,second,third,fourth;
scanf("%d",&num);
first=num;
third=num%100;
fourth=num%10;
second=num%1000;
printf("\n%d\n%d\n%d\n%d",first,second,third,fourth);

    return 0;
}
