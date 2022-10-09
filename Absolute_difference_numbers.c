#include<stdio.h>
int main()
{
    int n,rev,zero=1;
    long long num,last=0,r=0,first=0;
    scanf("%lld%d",&num,&n);
    rev=n;
    while(rev)
    {
        zero*=10;
        rev--;
    }
    last=num%zero;
    while(num)
    {
        r=(r*10)+(num%10);
        num/=10;
    }
    while(n)
    {
        first=(first*10)+(r%10);
        r/=10;
        n--;
    }
    if(first<last)
    printf("%lld",last-first);
    else
    printf("%lld",first-last);
}