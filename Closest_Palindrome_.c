#include<stdio.h>
void fun(int n)
{
    int l=0,r=0;
    for(int temp,rev=0,i=n+1;r==0;i++)
    {
        temp=i,rev=0;
        while(temp)
        {
            rev=(rev*10)+temp%10;
            temp/=10;
        }
        if(rev==i)
        {
            r=i;
            break;
        }
    }
    for(int temp,rev=0,i=n-1;l==0;i--)
    {
        temp=i,rev=0;
        while(temp)
        {
            rev=(rev*10)+temp%10;
            temp/=10;
        }
        if(rev==i)
        {
            l=i;
            break;
        }
    }
    if(n-l<r-n)
    printf("%d",l);
    else if(n-l>r-n)
    printf("%d",r);
    else
    printf("%d %d",l,r);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}