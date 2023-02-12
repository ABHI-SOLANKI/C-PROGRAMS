#include<stdio.h>
int main()
{
    float celsius,fahrenheih;
    printf("Enter Temp in celsius :");
    scanf("%f",&celsius);

    fahrenheih=(1.8*celsius)+32;
    printf("\n Temperature in fahrenheit :%f",fahrenheih);

    return(0);
}