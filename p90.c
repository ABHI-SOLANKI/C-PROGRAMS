//WAP to print the 1/1,1/2,1/3,.....1/12.using do while loop.

#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("1/%d",i);
        printf("\n");
        i++;
    } while (i<=12);
}