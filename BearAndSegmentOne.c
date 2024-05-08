#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    char s[100005];
    for(int i=1;i<=T;i++)
    {
        scanf("%s",&s[i]);
        int length=strlen[s];
        int count=0;
        for(int i=0;i<length;i++)
        {
            if(s[i]=='1')
            {
                count++;

            }
        }
    }
    return 0;
}
