//WAP which print claculate the midulas dividion of two value using union,

#include<stdio.h>
union add
{
    int a,b;
}s1;
int main()
{
    int ans;
    printf("Enter A Number 1:-");
    scanf("%d",&s1.a);
    printf("Enter A Number 2:-");
    scanf("%d",&s1.b);

    ans=s1.a+s1.b;
    printf("Ans Is =%d",ans);

}