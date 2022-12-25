//WAP to print the following pattern.
/*
    *1111
    **111
    ***11
    ****1
    *****
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}
