#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,key,i,left,right,m;
    printf("\n enter size of array:");
    scanf("%d",&n);
    printf("\n enter number:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    left=0;
    right=n;
    while(left<right)
    {
       m=left+(right-left)/2;
    if(a[m]==key)
    {

        printf("%d",m+1);
        break;

    }
    else if(a[m]<key)
    {

        left=left+1;
    }
    else if(a[m]>key)
    {

        right=right-1;
    }

    }

    return 0;
}
