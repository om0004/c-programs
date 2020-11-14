#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x;
    float z=0;
    char ch;
    while(1)
    {
    printf(" press 1 for pizza=$300\n press 2 for burger=$100\n press 3 for chips=$20\n press 4 for coke=$40\n press 5 for ice cream=$50\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        x=300;
        break;
    case 2:
        x=100;
        break;
    case 3:
        x=20;
        break;
    case 4:
        x=40;
        break;
    case 5:
        x=50;
        break;
    default:
        printf("invalid choice");
    }
     printf("\nenter no of items needed:");
     scanf("%d",&b);
     z=z+x*b;
      printf("\n if u want to order more click t else click n:");
     scanf("\n%c",&ch);
     if(ch=='n')
     {
         break;
     }
    }

    printf("****************************************************************************************************\n\n");
     printf("                total amount=%f\n\n\n\n\n\n\n\n\n",z+(z*5/100));

    return 0;
}
