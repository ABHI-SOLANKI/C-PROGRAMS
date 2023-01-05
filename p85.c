//WAP Which calculate the multipiction using N.A.W.R.

#include<stdio.h>
int mul()
{
    int a,b,ans;
    printf("Enter A Number 1:-");
    scanf("%d",&a);
    printf("Enter A Number 2:-");
    scanf("%d",&b);

    ans=a*b;
    return(ans);
}
int main()
{
    int fans;
    fans=mul();
    printf("Abs is = %d",fans);
}