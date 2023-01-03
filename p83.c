//WAP which calculate the addition of two value using N.A.N.R.

#include<stdio.h>
int add()
{
    int a,b,ans;
    printf("Enter A Number 1:-");
    scanf("%d",&a);
    printf("Enter A Number 2:-");
    scanf("%d",&b);

    ans=a+b;
    printf("Ans Is=%d",ans);
}
int main()
{
    add();
}