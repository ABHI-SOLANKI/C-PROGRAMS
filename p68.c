//WAP to print the following pattern.
/*
    **
    ***
    ****
    *****
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}