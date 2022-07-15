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
    int cs,maxx=0;
    for(j=0;j<c;j++)
    {
        cs=0;
        for(i=0;i<r;i++)
        {
            cs+=a[i][j];
        }
        if(cs>maxx)
        {
            maxx=cs;
        }
    }
    printf("%d",maxx);
}