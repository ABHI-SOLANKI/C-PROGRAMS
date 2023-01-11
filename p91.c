//WAP to print 28,24,20,.....4 using do while loop.

#include<stdio.h>
int main()
{
    int i=28;
    do
    {
        printf("%d",i);
        printf("\n");
        i=i-4;
    } while (i>=4);
}