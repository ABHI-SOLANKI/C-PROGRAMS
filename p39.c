//WAP to keep taking numbers as input from user until user enter a number which is multiple of 7.

#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter A Number :");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%7==0)
        {
            break;
        }
        
    }while(1);
    printf("Not multiple by 7\n");
    printf("Thank You");
}