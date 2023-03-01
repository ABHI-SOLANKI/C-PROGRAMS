#include<stdio.h>
//#include<stdio.h>
void bubble_sort(int[],int);
void main()
{
    int list[100],n,i;
    //clrscr();

    printf("\n Enter number of element :-");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter Value :-");
        scanf("%d",&list[i]);
    }
    bubble_sort(list,n);

    printf("\n\n Sorted data ");
    for(i=0;i<n;i++)
    {
        printf("\n Value =%d\n",list[i]);
    }
    //getch();
}
void bubble_sort(int list[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(list[j>list[j+1]])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
}