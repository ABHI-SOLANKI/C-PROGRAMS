#include<stdio.h>
int main()
{
    int a,b,c,total;
    printf("Enter A Numver 1:");
    scanf("%d",&a);
    printf("Enter A Numver 2:");
    scanf("%d",&b);
    printf("Enter A Numver 3:");
    scanf("%d",&c);

    total=a+b+c;
    int average=total/3;
    printf("average is:%d",average);
}