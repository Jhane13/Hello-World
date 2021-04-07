//Program that adds all array elements and display the sum, using recursion.
#include<stdio.h>
int sum(int n);
int  main()
{
int ArrayNumbers[10]; //function prototype
 ArrayNumbers[1]=50;
printf("size of a array: %d\n",ArrayNumbers[1]);

int i, j, element;

for(i=0; i<10; i++) { //looping Statement.

   for(j=0; j<50; j++) {
printf("Element of Array %d: %d\n", i, j, element);
   } 
} 

int sum;
    sum= sum+element; //function call
printf("Sum of element:%d",&sum);
//if condition statement 
int n;

if(n=element){

    return n+element;
    }
 else  {
    return n;
   }
    



   return 0;      
}



    