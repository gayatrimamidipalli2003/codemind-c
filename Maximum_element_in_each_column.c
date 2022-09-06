#include<stdio.h>
int main()
{
    int n,m,max=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<arr[j][i])
            {
                max=arr[j][i];
            }
        }
        printf("%d
",max);
        max=0;
    }
}