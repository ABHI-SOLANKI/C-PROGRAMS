//WAP to  take single charecter from the user and check it's a vowel charecter or not.

#include<stdio.h>
int mani()
{
    char ch;
    printf("Enter A Charecter :-");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("It's A Vowel");
    }
    else if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("It's A Vowel");
    }
    else
    {
        printf("It's Not A Vowel");
    }
    
}