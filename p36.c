//print the sum of first n natural numbers.

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter A Number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum Is : %d",sum);
}