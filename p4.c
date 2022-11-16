//WAP to check whether a  giveen number is positive or non-positive.[if]

#include<stdio.h>
void main(){

    int a;
    printf("Enter a number");
    scanf("%d",&a);

    if (a>0)
    {
        printf("Positive");
    }
    if(a<=0)
    {
        printf("Non-positive");
    }
    
    
}