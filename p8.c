// WAP to check whether a givan number is even or odd.

#include<stdio.h>
void main(){

    int a;
    printf("Enter a Number");
    scanf("%d",&a);

    if (a%2)
        printf("This Is A Odd Number");
    else
        printf("This Is A Even Number");
}