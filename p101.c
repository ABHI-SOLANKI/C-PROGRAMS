//WAP which calculate the multiplication using structure.

#include<stdio.h>
struct mul
{
    int a,b;   
}s1;
int main()
{
    int ans1,ans2;
    printf("Enter A Number 1:-");
    scanf("%d",&s1.a);
    printf("Enter A Number 2:-");
    scanf("%d",&s1.b);

    ans1=s1.a * s1.b;

    printf("\nAns of mul is=%d",ans1);

}