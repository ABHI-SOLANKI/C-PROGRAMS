//print the table of a number input by the user.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter A Number :");
    scanf("%d",&n);

    for(i=1;i<=10 ;i++)
    {
    printf("%d \n",n*i);
    }
}