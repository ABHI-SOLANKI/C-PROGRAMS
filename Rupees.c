#include<stdio.h>
int main()
{
    float rupees;
    printf("Please Enter Rupees :");
    scanf("%f",&rupees);

    float dollars = rupees / 64;
    printf("%f Dollars",dollars);
}