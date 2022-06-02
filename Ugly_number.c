#include<stdio.h>
int main()
{
    int num,c=0;
    scanf("%d",&num);
    while(num!=1)
    {
        if(num%2==0)
        {
            num/=2;
        }
        else if(num%3==0)
        {
            num/=3;
        }
        else if(num%5==0)
        {
            num/=5;
        }
        else
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("Not Ugly Number");
    }
    else
    {
        printf("Ugly Number");
    }
}