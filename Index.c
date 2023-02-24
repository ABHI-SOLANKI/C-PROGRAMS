#include<stdio.h>
//#include<conio.h>
void index_search(int[],int,int);
int main()
{
    int list[200],n,i,key;
   // clrscr();
    printf("\nHow to want to arry value :-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Value :-");
        scanf("%d",&list[i]);
    }
    printf("\nEnter your searching number :-");
    scanf("%d",&key);
    index_search(list,n,key);
    for(i=0;i<n;i++)
    {
        printf("\nValue is===%d",list[i]);
    }
    //getch();
}
void index_search(int list[],int n,int key)
{
    int flag=0,i;
    for(i=0;i<n;i++)
    {
        if(i==key)
        {
            printf("Value %d is found",list[i]);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nValue is not found");
    }
}