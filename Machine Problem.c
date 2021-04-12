//Program that login user inputs ID# and PIN and if the credentials are correct, and display it.
#include<stdio.h>
int  main()
{
   int ID,PIN;

   printf("Enter ID number:");
   scanf("%d",&ID);
   printf("Enter PIN:");
   scanf("%d",&PIN);

  if(ID<=1500){
       printf("You have successfully logged in \nID#:1500");
    }
  else {
        printf("\tInvalid ID/PIN!");
  }

   return 0;      
}



    