#include<stdio.h>
//#include<conio.h>
void binary_search(int[],int,int);
void selection_sort(int[],int);
void main()
{
    int list[200],i,n,key;
    //clrscr();

    printf("\n How namy value to enter :-");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter Value :-");
        scanf("%d",&list[i]);
    }
    printf("\n\n Enter The Searching Element :-");
    scanf("%d",&key);
    selection_sort(list,n);

    printf("Sorted data");
    for(i=0;i<n;i++)
    {
        printf("\n Value is===%d",list[i]);
    }
    binary_search(list,n,key);
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
void binary_search(int list[],int n,int key)
{
    int low,high,mid,flag=0;
    low=0;
    high=n;
    mid=(low+high)/2;

    while(flag!=1 && low<=high)
    {
        if(key==list[mid])
        {
            printf("\n Value=%d is found",key);
            flag=1;
        }
        else if(key<list[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    if(flag==0)
    {
        printf("\n Not Found");
    }
}