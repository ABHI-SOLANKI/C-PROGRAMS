//print the factorial of a number n.

#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter A Number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial Is :%d",fact);
}