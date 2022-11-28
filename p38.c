//WAP to keep taking numbers as input from user until user enters an odd number.

#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter A Number :");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%2!=0)
        {
            break;
        }
        
    }while(1);
    printf("Even Number\n");
    printf("Thank You");

}