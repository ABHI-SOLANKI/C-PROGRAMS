//WAP which print the factorial of a given number.

#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("Enter An  Integer :");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Error ! Factorial Of A Nagative Doesn't exist.");
    }
    else
    {
        for(i=1;i<=n;++i)
        {
            factorial * i;
        }
        printf("Factorial Of %d",n,factorial);
    }
}