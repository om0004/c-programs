#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp,size,a[100],j,n,pos;
    printf("enter size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
         for(i=0;i<size;i++)
            printf("%d",a[i]);
     for(i=0;i<size;i++)
     {
         for(j=i+1;j<size;j++)
         {
             if(a[j]<a[i])
             {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
             }
         }
     }
             printf("\n\nsorted array =");
              for(i=0;i<size;i++)
                {
                    printf("%d",a[i]);
                }
                printf("\nenter position:");
                scanf("%d",&pos);
                printf("\nenter number:\n\n");
                scanf("%d",&n);
                size=size-1;
                for(i=size;i>=pos;i--)
                {
                    a[i+1]=a[i];
                }
                a[pos]=n;
                size=size+1;
                 for(i=0;i<=size;i++)
                 {
                     printf("%d",a[i]);
                 }


    return 0;
}
