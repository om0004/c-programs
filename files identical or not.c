#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    FILE *q;
    int count=0;
    char c1,c2;
    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r");
    q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file 2\\abcd.text","r");
    if(p==NULL||q==NULL)
    {
        printf("file not found");
    }
    c1=fgetc(p);
    c2=fgetc(q);
    while(c1!=EOF&&c2!=EOF)
    {
        if(c1!=c2)
        {
            count++;
        }
        c1=fgetc(p);
        c2=fgetc(q);
           }
    if(count>0)
    {
        printf("not identical");
    }
    else{
        printf("identical");
    }
    return 0;
}
