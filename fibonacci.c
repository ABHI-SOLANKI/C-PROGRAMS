#include<stdio.h>
int main()
{
    int sum=0,n,a=0,b=1;
    printf("Enter a number :-");
    scanf("%d",&n);
    printf("Fibonacci series :");

    while (sum<=n)
    {
        printf("%d \n",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
    
}