//WAP to print 3,6,9...30; using do while loop.

#include<stdio.h>
int main()
{
    int i=3;
    do
    {
        printf("%d",i);
        printf("\n");
        i=i+3;
    } while (i<=30);
}