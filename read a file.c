#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *p;
  char name[50];

  p=fopen("C:\\Users\\omver\\OneDrive\\Desktop\\abc.text","r");
  if(p==NULL)
  {
      printf("\n not found");
      exit(1);
  }
  fscanf(p,"%s",name);
  puts(name);

  fclose(p);
    return 0;
}
