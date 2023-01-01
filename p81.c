//WAP which accept two value from user and calculate total of those value using structure.

#include<stdio.h>
struct add
{
    int a,b;
}s1;
void main()
{
    int ans;

    printf("Enter A Number :-");
    scanf("%d",&s1.a);
    printf("Enter A Number :-");
    scanf("%d",&s1.b);

    ans=s1.a+s1.b;
    printf("Ans is = %d",ans);
}