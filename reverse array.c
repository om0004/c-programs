#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],i;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        n=n-1;
        for(i=n;i>=0;i--)
        {
            printf("%d ",a[i]);
        }
    return 0;
}
