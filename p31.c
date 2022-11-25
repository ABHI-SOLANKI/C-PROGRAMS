//WAP to check if a number is odd or even.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter A Number :");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("This is even");
    }
    else
    {
        printf("This is odd");
    }
    
}