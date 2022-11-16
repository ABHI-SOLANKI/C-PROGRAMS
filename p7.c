// WAP to ccheck whether a given number is divisible by 5 or not.

#include<stdio.h>
void main(){

    int a;
    printf("Enter a Number");
    scanf("%d",&a);

    if(a%5==0)
        printf("Divisible by 5");
    else
        printf("Not Divisible by 5");
}