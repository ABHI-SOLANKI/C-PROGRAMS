//WAP to swap value of two int variable without using third variable.

#include<stdio.h>
void main(){

    int a=10,b=20;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d",a,b);
}