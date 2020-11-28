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
    FILE *q;
    int n,found;
    char ch,str[80];

    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r+");
    q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file 2\\abcd.text","w+");
    if(p==NULL)
    {
        printf("file not found");
    }
    printf("enter roll number whose record is to be deleted:");
    scanf("%d",&n);
    while(!feof(p))
    {
        fscanf(p,"%d",&stud.roll);
        if(stud.roll==n)
        {
            fscanf(p,"%s %d",stud.name,&stud.fee);
        }
        else
        {
       fscanf(p,"%s %d",stud.name,&stud.fee);
       fprintf(q,"%d %s %d ",stud.roll,stud.name,stud.fee);
        }
    }
    fclose(p);
    fclose(q);
 p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","w+");
 q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file 2\\abcd.text","r+");
  ch=fgetc(q);
    while(ch!=EOF)
    {
        putc(ch,p);
        ch=fgetc(q);
    }

    return 0;
}
