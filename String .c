//Programs that takes a string from the user input and converts as vowels.
#include<stdio.h>
#include<string.h>
int main()
{
char w[200];
int i, length, vowels=0, consonants=0;

printf("Input a word of Wisdom: " );
gets( w);
i=0;
while(w[i]!='\0')
 {
    if(w[i]=='a' || w[i]=='e' || w[i]=='i' || w[i]=='o' || w[i]=='u')
            w[i]=w[i]-32;
    i++;
 }
      printf("String Converted:");
      puts(w);
      printf("\n");
      length = strlen(w);
      printf("String Length:%d\n", length);
for(i=0;w[i];i++)
    {
    if((w[i]>=65 && w[i]<=90)||(w[i]>=97& w[i]<=122))
       {
    if(w[i]=='a' || w[i]=='e' || w[i]=='i' || w[i]=='o' || w[i]=='u' || w[i]=='A' || w[i]=='E' || w[i]=='I' || w[i]=='O' || w[i]=='U')
                vowels++;
        else
        consonants++;
        }
    }

printf("Vowels:%d\n", vowels);
printf("Consonants:%d\n", consonants);





    return 0;
}








    