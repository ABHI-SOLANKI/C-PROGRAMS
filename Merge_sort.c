#include<stdio.h>
//#include<stdio.h>
int merge_sort(int[],int,int[],int,int[]);
void selection_sort(int[],int);
void main()
{
    int alist[200],n,blist[200],m,result[400],i,k;
    //clrscr();

    printf("\n How many value you enter :-");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\n Enter Value :-");
        scanf("%d",&alist[i]);
    }
    selection_sort(alist,n);

    printf("\n How nany value you enter :-");
    scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        printf("\n Enter Value :-");
        scanf("%d",&blist[i]);
    }
    selection_sort(blist,m);

    k=merge_sort(alist,n,blist,m,result);
    printf("\n SORTED LIST");

    for(i=0;i<k;i++)
    {
        printf("\n Value is =%d",result[i]);
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
int merge_sort(int alist[],int n,int blist[],int m,int result[])
{
    int i=0,j=0,k=0,c;
    while ((i<n) && (j<m))
    {
        if(alist[i]<blist[j])
        {
            result[k]=alist[i];
            i++;
            k++;
        }    
        else if(alist[i]>blist[j])
        {
            result[k]=blist[j];
            j++;
            k++;
        }
        else
        {
            result[k]=alist[i];
            i++;
            j++;
            k++;
        }
    }
    if(i<n)
    {
        for(c=i;c<n;c++)
        {
            result[k]=alist[c];
            k++;
        }
    }
    if(j<m)
    {
        for(c=j;c<m;c++)
        {
            result[k]=blist[c];
            k++;
        }
    }    
    return(k);
}