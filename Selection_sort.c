#include<stdio.h>
//#include<conio.h>
void selection_sort(int[],int);
void main()
{
    int list[200],n,i;
    //clrscr();

    printf("\n How many value to enter :-");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value :-");
        scanf("%d",&list[i]);
    }
    selection_sort(list,n);

    printf("\n Sorted data \n");
    for(i=0;i<n;i++)
    {
        printf("\n Value=%d",list[i]);
    }
    //getch();
}
void selection_sort(int list[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}