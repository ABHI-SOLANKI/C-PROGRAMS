//WAP to give grades to a students.
/*
    mark <30 is C.
    30 <=mark <70 is B.
    70 <=mark <90 is A.
    90 <=mark <=100 is A+.
*/

#include<stdio.h>
int main()
{
    int mark;
    printf("Enter A Student Marks :");
    scanf("%d",&mark);

    if (mark>=0 && mark<=30)
    {
        printf("GRADE IS :- C");
    }
    else if (mark>=31 && mark<=70)
    {
        printf("GRADE IS :- B");
    }
    else if (mark>=71 && mark<=90)
    {
        printf("GRADE IS :-A");
    }
    else if (mark>=91 && mark<=100)
    {
        printf("GRADE IS :-A+");
    }
    else
    {
        printf("Wrong Marks");
    }  
}