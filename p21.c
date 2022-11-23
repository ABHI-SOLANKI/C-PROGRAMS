//WAP which acceept two values from user and calculate the total of those value using structure.

#include<stdio.h>
struct add
{
    int a,b;
}s1;

int main()
{
    int ans;
    printf("Enter A Value 1:-");
    scanf("%d",&s1.a);

    printf("Enter A Value 2:-");
    scanf("%d",&s1.b);

    ans=s1.a + s1.b;
    printf("Ans is=%d",ans);

}