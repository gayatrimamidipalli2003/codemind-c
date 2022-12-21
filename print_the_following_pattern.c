#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<(n+1);i++)
    {
        for(int j=1;j<(n+1-i);j++)
        {
            printf(" ");
        }
        for(int j=1;j<(n+1);j++)
        {
            if(i==1 || i==n)
            {
                printf("*");
            }
            else if(j==1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}