#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A Number 1:-");
    scanf("%d",&a);
    printf("Enter A Number 2:-");
    scanf("%d",&b);

    if(a>=b)
    {
        printf("%d is a largest number",a);
    }
    else
    {
        printf("%d is a largest number",b);
    }
    
}