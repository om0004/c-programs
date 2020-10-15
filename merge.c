#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,a[100],b[100],count=0,c[100],h,temp,j;
    printf("enter size of array 1:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("enter size of array 2:");
   scanf("%d",&n2);
   for(i=0;i<n2;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<n1;i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n\n");
   for(i=0;i<n2;i++)
   {
       printf("%d ",b[i]);
   }
for(i=0;i<n1;i++)
{
    c[count]=a[i];
    count++;
}
for(i=0;i<n2;i++)
{
    c[count]=b[i];
    count++;
}
h=n1+n2;
printf("\n\n");
for(i=0;i<h;i++)
printf("%d ",c[i]);
for(i=0;i<h;i++)
{
    for(j=i+1;j<h;j++)
    {

        if(c[j]<c[i])
        {

            temp=c[j];
            c[j]=c[i];
            c[i]=temp;
        }
    }
}
printf("\n\n");
for(i=0;i<h;i++)
{
    printf("%d ",c[i]);
}
    return 0;
}
