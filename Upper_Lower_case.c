#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n Upeer Case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n Lower Case");
    }
    else
    {
        printf("Not English Letter");
    }
}