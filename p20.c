/*  define a game like program,in which user has to enter an even number to win the game user will 
    get at mosst 3 chances*/

#include<stdio.h>
void main()
{
    int x,i;
    for (i=1;i<=3;i++)
    {
        printf("Enter An Even Number");
        scanf("%d",&x);

        if(x%2==0)
            break;
    }
    if (i==4)
        printf("GAME OVER");
    else
        printf("YOU WIN");
}