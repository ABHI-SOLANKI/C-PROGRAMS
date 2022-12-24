//WAP to print the following pattern.
/*
    1****
    *1***
    **1**
    ***1*
    ****1
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==j)
            {
                printf("1");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}