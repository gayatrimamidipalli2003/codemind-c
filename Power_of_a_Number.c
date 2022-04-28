#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,r,res;
    scanf("%d%d%d",&x,&y,&m);
    r=pow(x,y);
    res=r%m;
    printf("%d",res);
}