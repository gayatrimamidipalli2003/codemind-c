#include<stdio.h>
int main()
{
    int L,B,W,C,L1,B1,F;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    L1=L+2*W;
    B1=B+2*W;
    F=((L1*B1)-(L*B))*C;
    if(L1<=0 || B1<=0)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",F);
    }
}