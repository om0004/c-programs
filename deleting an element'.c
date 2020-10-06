#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,pos,i,a[100];
    printf("enter size:");
    scanf("%d",&size);
    printf("\nenter position:");
    scanf("%d",&pos);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    printf("%d",a[i]);
    size=size-1;
    for(i=pos;i<size;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n");
     for(i=0;i<size;i++)
     {
         printf("%d",a[i]);
     }

    return 0;
}
