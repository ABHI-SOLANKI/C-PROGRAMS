//WAP to print the following pattern.
/*
    a
    bb
    ccc
    dddd
    eeeee
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i='a';i<='e';i++)
    {
        for(j='a';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}