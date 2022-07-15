#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int rs,maxx=0;
    for(i=0;i<r;i++)
    {
        rs=0;
        for(j=0;j<c;j++)
        {
            rs+=a[i][j];
        }
        if(rs>maxx)
        {
            maxx=rs;
        }
    }
    int cs,max=0;
    for(j=0;j<c;j++)
    {
        cs=0;
        for(i=0;i<r;i++)
        {
            cs+=a[i][j];
        }
        if(cs>max)
        {
            max=cs;
        }
    }
    if(maxx<max)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",maxx);
    }
}