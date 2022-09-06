#include<stdio.h>
int main()
{
    int n,num=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        num=num*10+arr[i];
    }
    num+=1;
    int temp=num,d=0;
    while(temp)
    {
        temp/=10;
        d++;
    }
    int res[d];
    for(int i=0;i<d;i++)
    {
        res[i]=num%10;
        num/=10;
    }
    for(int i=d-1;i>=0;i--)
    {
        printf("%d ",res[i]);
    }
}