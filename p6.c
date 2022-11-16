//WAP to check whether a  giveen number is positive or non-positive.[? :]

#include<stdio.h>
void main(){

    int a;
    printf("Enter a number");
    scanf("%d",&a);

    printf(a>0 ?"Positive":"Non-positive");
    //a>0 ? printf("positive"):printf("non-positive");
}