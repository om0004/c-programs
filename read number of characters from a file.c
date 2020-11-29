#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    char ch,e[100];
    int d=0;
    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r");
    ch=fgetc(p);
    while(ch!=EOF)
    {
        d++;
        ch=fgetc(p);
    }
    printf("%d",d);


    return 0;
}
