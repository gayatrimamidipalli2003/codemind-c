#include<stdio.h>
int main()
{
    int n,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,ei=0,ni=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            on++;
        }
        else if(arr[i]==2)
        {
            tw++;
        }
        else if(arr[i]==3)
        {
            th++;
        }
        else if(arr[i]==4)
        {
            fo++;
        }
        else if(arr[i]==5)
        {
            fi++;
        }
        else if(arr[i]==6)
        {
            si++;
        }
        else if(arr[i]==7)
        {
            se++;
        }
        else if(arr[i]==8)
        {
            ei++;
        }
        else if(arr[i]==9)
        {
            ni++;
        }
    }
    if(on>1)
        {
            printf("1");
        }
        else if(tw>1)
        {
            printf("2");
        }
        else if(th>1)
        {
            printf("3");
        }
        else if(fo>1)
        {
            printf("4");
        }
        else if(fi>1)
        {
            printf("5");
        }
        else if(si>1)
        {
            printf("6");
        }
        else if(se>1)
        {
            printf("7");
        }
        else if(ei>1)
        {
            printf("8");
        }
        else if(ni>1)
        {
            printf("9");
        }
}