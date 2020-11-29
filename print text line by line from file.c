#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *p;
   char str[50],ch;
   int i=1,j,count=0;
   p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r");
   if(p==NULL)
   {
       printf("not found");
   }
   ch=fgetc(p);
   while(ch!=EOF)
   {
    if(ch=='\n')
    {
        count++;
    }
    ch=fgetc(p);
   }
   fclose(p);
   FILE *q;
   q=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\write a file\\abc.text","r");
   fgets(str,50,q);
   for(j=0;j<=count;j++)
   {
   printf("%d.",i);
   puts(str);
   fgets(str,50,q);
   i++;
   }
    return 0;
}
