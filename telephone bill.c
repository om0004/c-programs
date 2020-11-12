#include <stdio.h>
#include <stdlib.h>
void call();
int main()
{
    int a,i,f;
       while(1)
       {
           call();
           printf("\n next customer press y else n:");
           scanf("\n%c",&f);
           if(f=='n')
           {

               break;
           }
       }

    return 0;
}
void call()
{
    int b,c;
    char s[100];
    float bill;
    printf("enter name of customer:");
    scanf("%s",s);
    printf("enter calls made:");
    scanf("%d",&b);
    if(b>100)
    {
        c=b;
        c=c-100;
        bill=250+(c*2.5);
    }
    else
    {
        bill=250;
    }
    printf("\n\n\n\n\n\n\n\n");
    printf("**************************bill**********************\n");
    printf("\n\n name of customer:%s",s);
    printf("\n\n calls made:%d",b);
    printf("\n\n bill=%.2f",bill);
    bill=0;
}





