//Program that print the electricity bill..
#include<stdio.h>
 int main()
 {
    //function prototypes
    int ID,consumed, bill, charge,surcharges;
   float unit_consumed,surchg=0, unit_chrg;
   int add, cons=100,chrge=10;
    printf("Customer ID:"); 
    scanf("%d",&ID);
    printf("Unit Consumed:");
    scanf("%d",&consumed);
    printf("Unit charges:");
    scanf("%d",&charge);
    printf("Surcharges:");
    scanf("%d",&surcharges);
    printf("Total Consumed Bill:");
    scanf("%d",&bill);
    
     
    
    if(unit_consumed>= 199 && unit_consumed<250)
    {
     printf("Unit charges = 1.50\n");
     }
  else if(unit_consumed>= 250  && unit_consumed< 400)
 {
     printf("Unit charges = 1.60\n");
     }
  else if(unit_consumed>= 450  && unit_consumed<600) 
    {
     printf("Unit charges = 1.85\n");
       } 
         else {
     printf("Unit charges = 2.00\n");
      }  
    
    return 0;
}



    