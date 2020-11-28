#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    FILE *q;
    char str[80];
    p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file 2\\abcd.text","r");
    q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","a");
    while(!feof(p))
    {
        fgets(str,sizeof(str),p);
        printf("%s",str);
        fputs(str,q);

    }

    return 0;
}
