//WAP to calculate sum of first n natural number.

#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter A Numbe");
    scanf("%d",&n);

    int sum=0;
    for(i=1;i<=n;i++)
       s=s+i;
    printf("sum is %d",s);
}