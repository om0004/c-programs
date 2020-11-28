#include <stdio.h>
#include <stdlib.h>
struct studentt
{
    int roll;
    char name[50];
    int fee;
};

int main()
{
    struct studentt stud;
    FILE *p;
    int n,found;

    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r+");
    if(p==NULL)
    {
        printf("file not found");
    }
    printf("enter roll number whose record is to be edited:");
    scanf("%d",&n);
    while(!feof(p))
    {
       fscanf(p,"%d %s %d",&stud.roll,stud.name,&stud.fee);
       if(stud.roll==n)
       {
           found=1;
           printf("\n\n the details of existing record are: %d %s %d",stud.roll,stud.name,stud.fee);
           break;
       }
    }
    fclose(p);
    FILE *q;
     q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r+");

    if(found==1)
    {
       printf("\n enter the modified name:");
       fflush(stdin);
       scanf("%s",stud.name);
       scanf("%d",&stud.fee);
       fprintf(q,"%s %d ",stud.name,stud.fee);
    }
    fclose(q);
    return 0;
}
