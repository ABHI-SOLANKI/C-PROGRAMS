//WAP which print the factors of a positive integer.

#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter A Positive Integer :-");
    scanf("%d",&num);
    
    printf("factors Of %d Are :-",num);
    for(i=1;i<=num;++i)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
}