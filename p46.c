//write a function that print 'Namaste' if user is  indian & 'Bonjour' if the user is french.

#include<stdio.h>
void namaste();
void bonjour();

int main()
{
    printf("Enter 'i'for indian & 'f' for french :");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
}    
void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}