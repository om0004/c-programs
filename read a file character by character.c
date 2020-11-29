#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
   FILE *p;
   p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r");
   if(p==NULL)
   {
       printf("not found");
   }
   ch=fgetc(p);
   while(ch!=EOF)
   {
       putchar(ch);
       ch=fgetc(p);
   }
   fclose(p);
    return 0;
}
