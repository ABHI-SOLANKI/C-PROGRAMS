//WAP which accept 7 subject mark for 1 student using array within structure.

#include<stdio.h>
struct std
{
    int m[7];
}s;
int main()
{
    int i;
    for(i=1;i<=7;i++)
    {
        printf("Enter A Number :-");
        scanf("%d",&s.m[i]);
    }
    for(i=1;i<=7;i++)
    {
        printf("\t\n Subject=01=&mark=%d",s.m[i]);
    }
}
