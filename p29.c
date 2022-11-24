//WAP  to swap two numbers [using two variable]

#include<stdio.h>
int main()
{
    int a=10,b=20;

    a=a-b;
    b=a+b;
    a=b-a;

    printf("%d %d",a,b);
}