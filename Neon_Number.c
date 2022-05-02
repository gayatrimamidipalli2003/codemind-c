#include<stdio.h>
int main()
{
    int num,d,s=0,sq;
    scanf("%d",&num);
    sq=num*num;
    while(sq!=0)
    {
        d=sq%10;
        s+=d;
        sq=sq/10;
    }
    if(s==num)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}