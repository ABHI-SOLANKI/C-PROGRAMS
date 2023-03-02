//WAP to print the following pattern.
/*
    *
    0*
    00*
    000*
    0000*
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j && j==i)
            {
                printf("*");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}