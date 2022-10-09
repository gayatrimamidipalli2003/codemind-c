#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int count=0,c=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            c++;
        }
        else
        {
            if(count<c)
            {
                count=c;
            }
            c=0;
        }
    }
    if(c>count)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",count);
    }
}