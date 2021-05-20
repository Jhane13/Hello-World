//Program that append multiple lines.
#include <stdio.h>
#include <stdlib.h>     
   int main()
{
   FILE*myfile;
   char str[50], i;
   
   
  myfile=fopen("C:\text.txt","w");
  if(myfile==NULL)
  {
   printf("Error! Cannot open file");
   exit(1);
}
  for(i=1; i<=5; i++)
      { 
       printf("  ",i);
      gets(str);
    fputs(str,myfile);
    }
 fclose(myfile);




 return 0;
}








    