#include<stdio.h>
int main()
{
    int m,n,i,start,end;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            start=i;
            break;
        }
    }
    if(arr[i]!=m)
    {
        printf("-1");
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            end=i;
        }
    }
    if(arr[end]==m)
    {
        printf("%d %d",start,end);
    }
    else if(arr[i]!=m)
    {
        printf(" -1");
    }
}