#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int c=0,x=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        int count=0;
        for(int j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            x++;
            c=i;
            break;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}