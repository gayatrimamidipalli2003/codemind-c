#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d %d ",a[i],a[n-(i+1)]);
    }
    if(n%2!=0)
    {
        printf("%d 0",a[i]);
    }
}