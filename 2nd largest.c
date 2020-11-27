#include <stdio.h>
#include <stdlib.h>
int read(int arr[],int );
int main()
{
    int arr[10],n,h,large=0,s=0,i,a,temp[100],j=0,b[10],ted,count=0;
    do
    {
        printf("\n\n\n1.Method 1:");
        printf("\n2.Method 2:");
        printf("\n3.Exit");
        printf("\n enter your choice:");
        scanf("%d",&n);
        switch(n)
        {

            case 1:
                {

                printf("\n enter the number of elements in array:");
                scanf("%d",&h);
                printf("\ninput elements:");
                read(arr,h);
                for(i=0;i<h;i++)
                {
                  if(arr[i]>large)
                  {

                  s=large;
                large=arr[i];


                }
                else if(arr[i]<large && arr[i]>s)
                {
                    s=arr[i];
                }
                }
                printf("\n\n%d",s);
                break;
                }
                case 2:
                    printf("\n enter the number of elements in array:");
                scanf("%d",&h);
                printf("\ninput elements:");
                read(arr,h);
                for(i=0;i<h;i++)
                {

                temp[arr[i]]=temp[arr[i]]+1;

                }
                for(i=0;i<h;i++)
                {
                    if(temp[arr[i]]>=1)
                    {
                        b[j]=arr[i];
                        j++;
                        temp[arr[i]]=0;
                        count++;
                    }
                }
            for(i=0;i<count;i++)
            {
                for(j=i+1;j<count;j++)
                {
                    if(b[j]>b[i])
                    {
                        ted=b[j];
                        b[j]=b[i];
                        b[i]=ted;
                    }
                }
            }
            for(i=0;i<count;i++)
            {
                printf("%d",b[i]);
            }
            printf("\n\n%d",b[1]);
            break;

        }



        }while(n!=3);
        return 0;
    }


int read(int arr[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
}
