#include<stdio.h>
int main()
{
    int l,r,sum=0,z=0;
    scanf("%d%d",&l,&r);
    int i;
    for(i=l;i<=r;i++)
    {
        z=0;
        int j;
        for(j=i;j<=r;j++)
        {
            z+=j;
            if(z%2)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
}