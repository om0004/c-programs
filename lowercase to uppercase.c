#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    FILE *q;
    char ch;
    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file 2\\abcd.text","r");
    q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","w+");
    ch=fgetc(p);
    while(ch!=EOF)
    {
        if(ch=='\n')
        {
        ch=ch+32;
        }
        ch=ch-32;
    fputc(ch,q);
    ch=fgetc(p);
    }
    return 0;
}
