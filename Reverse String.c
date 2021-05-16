//Programs that reverse the word.
#include<stdio.h>
#include<string.h>

int main()
{
     char arr1[30],arr2[60];
    int i=0,j=0;
    printf("Enter the string:");
    gets(arr1);
    while(arr1[i]!='\0')
    {
    i++;
    }
    while(i>0)
    {
    arr2[j]=arr1 [--i];
     ++j;
    }
    
    arr2[j]='\0';
    printf("Reverse String:");
    for(i=0; arr2[i]!='\0';i++)
    {
     if(arr2[i+1]==' ' || arr2[i+1]=='\0')
    {
     for(j=i; j>=0 && arr2[j]!=' ';j--)
    {
    printf("%c",arr2[j]);
    }
    printf(" ");
    }
    }


    return 0;
}








    