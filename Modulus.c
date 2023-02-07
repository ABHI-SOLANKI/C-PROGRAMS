#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter A Number 1:-");
    scanf("%d",&a);

    printf("Enter A Number 2:-");
    scanf("%d",&b);

    ans=a%b;
    printf("Modulus is =%d",ans);
}