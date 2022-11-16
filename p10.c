//WAP to find last digit of a givan number?

#include<stdio.h>
void main(){

    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    if(a>9){
        a=a%10;
        printf("%d",a);
    }else{
        printf("%d",a);
    }

}