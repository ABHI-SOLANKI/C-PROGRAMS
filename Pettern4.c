//WAP to print the following pattern.
/*
    00000
    00000
    00*00
    00000
    00000
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3 && j==3)
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