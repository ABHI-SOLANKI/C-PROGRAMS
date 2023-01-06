//WAP which calculate the divison using W.A.W.R.

#include<stdio.h>
int div(int a,int b)
{
    int ans;
    ans=a/b;
    return(ans);
}
int main()
{
    int a,b,fans;
    printf("Enter A Number 1:-");
    scanf("%d",&a);
    printf("Enter A Number 2:-");
    scanf("%d",&b);

    fans=div(a,b);
    printf("Ans is = %d",fans);
}