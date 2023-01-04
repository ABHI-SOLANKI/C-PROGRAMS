//WAP which calculate the subtraction of two value using W.A.N.R.

#include<stdio.h>
int sub(int a,int b)
{
    int ans;
    printf("Enter A Number 1:-");
    scanf("%d",&a);
    printf("Enter A Number 2:-");
    scanf("%d",&b);

    ans=a-b;
    printf("Ans Is=%d",ans);
}
int main()
{
    sub(10,20);
}