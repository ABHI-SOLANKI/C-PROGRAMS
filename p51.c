//WAP which check the enter number is armstong or not.

#include<stdio.h>
int main()
{
    int number,orignalNumber,remainder,result=0;
    printf("Enter A Three Digit Integer :");
    scanf("%d",&number);
    orignalNumber !=0 ;
    {
        remainder=orignalNumber % 10;
        result += remainder*remainder*remainder;
        orignalNumber /= 10;
    }
    if (result==number)
    {
        printf("%d Is An Armstrong Number",number);
    }
    else
    {
        printf("%d Is Not Armstrong Number",number);
    }    
}