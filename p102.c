//WAP which calculate the division using structure.

#include<stdio.h>
struct div
{
    int a,b;   
}s1;
int main()
{
    int ans1;
    printf("Enter A Number 1:-");
    scanf("%d",&s1.a);
    printf("Enter A Number 2:-");
    scanf("%d",&s1.b);

    ans1=s1.a / s1.b;

    printf("\nAns of div is=%d",ans1);

}