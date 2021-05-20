//Program that append multiple lines in a text file.
#include <stdio.h>
int main()
{
   char a[90];
   int num1, num2, num3,num4,num5;

   FILE *myfile;
   myfile = (fopen("C:\text.txt", "a"));

   if(myfile== NULL)
   {
       printf("Error!");
       return(1);
   }
   
    {
	 
	  printf("Input how many lines to be appended: ");
     scanf("%s", a);
    
    
    printf("\t ");
      scanf("%s", &num1);
    
      printf("\t");
      scanf("%s", &num2);
      printf("\t");
      scanf("%s", &num3);
      printf("\t");
      scanf("%s", &num4);
      printf("\t ");
       scanf("%s", &num5);

      printf("\nInside the text.txt\n");
      printf("\tBSIT\n");
      printf("\tCOT\n");
      printf("\tEMC\n");
      printf("\tIT114\n");
      printf("\tCC113\n");
    }

   fclose(myfile);


   return 0;
}
  








    