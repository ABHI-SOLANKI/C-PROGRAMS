//WAP which print the factors of a positive integer.

#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter A Positive Integer :");
    scanf("%d",&number);

    printf("factors of %d are :",number);
    for(i=1;i<=number;++i)
    {
        if(number % i==0)
        {
            printf("%d ",i);
        }
    }
}