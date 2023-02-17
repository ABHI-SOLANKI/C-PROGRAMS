/*
    marks > 30 is PASS.
    marks <=30 is FAIL.
*/

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter A Number :");
    scanf("%d",&marks);

    if (marks>=0 && marks <=29)
    {
        printf("FAIL");
    }
    else if(marks >29 && marks <=100)
    {
        printf("PASS");
    }
    else    
    {
        printf("Wrong Marks");
    }
    
}