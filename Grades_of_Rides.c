#include<stdio.h>
int main()
{
    int hf,snf,sdf;
    scanf("%d%d%d",&hf,&snf,&sdf);
    if(hf>50 && snf>60 && sdf>100)
    {
        printf("10");
    }
    else if(hf>50 && snf>60)
    {
        printf("9");
    }
    else if(snf>60 && sdf>100)
    {
        printf("8");
    }
    else if(hf>50 && sdf>100)
    {
        printf("7");
    }
    else if(hf>50 || snf>60 || sdf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}