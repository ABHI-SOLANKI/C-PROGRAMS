//WAP which accept two values from user and calculate cube ussing structure.

#include<stdio.h>
struct cube
{
    int a;
}s1;
int main()
{
    int ans;
    printf("Enter A Vaalue :-");
    scanf("%d",&s1.a);

    ans=s1.a*s1.a*s1.a;
    printf("Ans Is :-%d",ans);
}