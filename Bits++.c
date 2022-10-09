#include<stdio.h>
int main()
{
    char str[10];
    int n,c=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",str);
        if(str[1]=='+')
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    printf("%d",c);
}