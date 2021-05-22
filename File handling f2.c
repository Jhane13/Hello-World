
#include <stdio.h>
int main()
{
   char name[50], name1 [50]; 
  int i, e, id, eng, math, sci, avg, tot, id1,eng1, math1, sci1, avg1, tot1;

    FILE *myfile,*myfile1; 
       myfile = (fopen("C:\student.txt", "a"));
       myfile = (fopen("C:\\student1.txt", "a"));
   if(myfile,myfile1== NULL)
   { 
     printf("Error!");
     return(1);
     } 
    {	 	 
    printf("\nName: "); 
    scanf("%s", name);
    printf("ID No: ");
    scanf("%d",&id);
    
     printf("Math: "); 
    scanf("%d", &math); 
    printf("Sci: "); 
    scanf("%d", &sci); 
    printf("Eng: ");
     scanf("%d", &eng); 
    
    tot = eng+math+sci;
     avg = tot/3; 
    
    printf("\n\nName: "); 
    scanf("%s", name1);
    printf("ID No: ");
    scanf("%s", &id1);
    
     printf("Math: "); 
    scanf("%d", &math1);
     printf("Sci: ");
     scanf("%d", &sci1); 
    printf("Eng: "); 
    scanf("%d", &eng1);
    
     tot1 = eng1+math1+sci1;
     avg1 = tot1/3; 
    
    fprintf(myfile,"\n\nName: %s \n", name);
    fprintf(myfile,"ID No: %s \n", id);
    fprintf(myfile,"Eng: %i \n", eng); 
    fprintf(myfile,"Math: %i \n", math);
    fprintf(myfile,"Sci: %i \n", sci); 
    fprintf(myfile,"\n\nTotal Grade %i \n", tot);
    fprintf(myfile,"Total Average %i \n", avg); 	
    fprintf(myfile1,"\nName: %s \n", name1); 
    fprintf(myfile1,"Eng: %i \n", eng1); 
    fprintf(myfile1,"Math: %i \n", math1); 
    fprintf(myfile1,"Sci: %i \n", sci1); 
    fprintf(myfile1,"\n\nTotal Grade %i \n", tot1);
    fprintf(myfile1,"Total Average %i \n", avg1);
     }
       fclose(myfile);
    
     return 0;
    } 










    