//WAP to compute fahrenheit from celsius.

#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter A number:");
    scanf("%f",&f);

     c=(f-32)/1.8;
    printf("Celsius Is:%f",c);
}