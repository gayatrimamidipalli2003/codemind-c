#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],p;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        p=1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                p*=arr[j];
            }
        }
        printf("%d ",p);
    }
}