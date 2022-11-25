//WAP to check if given number is digit or not.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter A Number :");
    scanf("%d",&x);

    if (x>=0 && x<=9)
    {
        printf("This is Digit");
    }
    else
    {
        printf("This is Not-Digits");
    }
    
}