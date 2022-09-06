#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float s=0,count=0,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int x=a[i],t=0;
        int j;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                t++;
            }
        }
        if(t==x)
        {
            s+=a[i];
            count++;
            a[i]=0;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",(s*1.0)/(count*1.0));
    }
}