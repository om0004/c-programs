#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,size,pos,n;
    scanf("%d%d%d",&size,&pos,&n);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<size;i++)
     {
    printf("%d",a[i]);
     }
    printf("\n\n");
    for(i=size-1;i>=pos;i--)
    {
    a[i+1]=a[i];
    }
    a[pos]=n;
     for(i=0;i<=size;i++)
     {
         printf("%d",a[i]);
     }

    return 0;
}
