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
    int n,found=0;
    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r");
    if(p==NULL)
    {
        printf("notfound");
    }
    printf("enter roll number whose record is to be found:");
    scanf("%d",&n);
    while(!feof(p))
    {
    fscanf(p,"%d %s %d",&stud.roll,stud.name,&stud.fee);
    if(stud.roll==n)
    {
        found=1;
        printf("%d %s %d",stud.roll,stud.name,stud.fee);
        break;
    }
    }
    if(found!=1)
    {
        printf("no record found");
    }




    return 0;
}
