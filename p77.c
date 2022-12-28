//WAP to print the following pattern.
/*
    1
    01
    010
    1010
    10101
*/

#include<stdio.h>
int main()
{
    int i,j,c=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(c%2==1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            c++;
        }
        printf("\n");
    }
}