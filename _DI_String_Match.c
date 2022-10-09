#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int len=strlen(str);
    int c=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='I')
        {
            printf("%d ",c);
            c++;
        }
        if(str[i]=='D')
        {
            printf("%d ",len);
            len--;
        }
    }
    printf("%d ",c);
}