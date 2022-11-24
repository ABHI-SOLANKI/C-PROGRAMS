//WAP to check if a number is divisible by 2 or not.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter A Number :");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("Divisible by 2");
    }
    else
    {
        printf("Not-Divisible by 2");
    }
    
}