//Program that print the electricity bill..
#include<stdio.h>
 int main()
 {
    //function prototypes
  int ID,Unit, bill, charge,surcharges;
  char unit;

    printf("Customer ID:"); 
    scanf("%d",&ID);
    printf("Unit per Charges:");  /* Input customer information & Obligations */
    scanf("%d",&charge);
    printf("Surcharges:");
    scanf("%d",&surcharges);
    printf("Total Consumed Bill:");
    scanf("%d",&bill); 

    if(199>=250)       
    {
     printf("Charges = 1.50\n");
     }
  else if(250 >=400)
 {
     printf("Charges = 1.60\n");
     }
  else if(450<600) 
    {
     printf("Charges = 1.85\n");
       } 
         else {
     printf("Charges = 2.00\n");
    }
    
int unit_per_charge,unit_charge,chrge,srchrge, unit_consumed;
    
   chrge=unit_per_charge*unit_charge; 

  printf("Total Unit Charge:");
  scanf("%d",&unit_per_charge,&unit_charge);

  srchrge=unit_consumed*10/100;           
 printf("Total surcharges=%d",&srchrge);

    
    return 0;      
}



    