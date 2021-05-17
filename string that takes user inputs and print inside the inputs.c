//program that takes the the user input as a string and print it inside 
#include<stdio.h>
#include<string.h>

int main()
{
  char str[50];
 printf("Input a string:");
fgets(str, sizeof str,stdin);
printf("The sring you entered is: %s",str);


    return 0;
}








    