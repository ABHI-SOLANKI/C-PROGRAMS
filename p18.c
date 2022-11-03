//WAP to print frist N odd natural number in reverse order.

#include<stdio.h>
void main(){

    int n,i=1;
    printf("Enter a Number");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d",2*n+1-2*i);
        i++;
    }
}