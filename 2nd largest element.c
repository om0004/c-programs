#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,j,temp,n;
    printf("\n enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
    printf("%d",a[1]);
    return 0;
}
