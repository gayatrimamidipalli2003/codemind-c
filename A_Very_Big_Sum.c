#include<stdio.h>
int main()
{
    int ele;
    scanf("%d",&ele);
    long long sum=0,arr[ele];
    for(int i=0;i<ele;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    printf("%lld",sum);
}