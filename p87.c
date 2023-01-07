//WAP to swap two nymber using two variable.

#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before Roted a=%d b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n After Roted a=%d b=%d",a,b);
}