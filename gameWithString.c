#include<stdio.h>
#include<string.h>
#define SIZE 100001

int main()
{
    char string[SIZE];
    int count=0;
    scanf("%s",&string);

    int length=strlen(string);

    char stack[SIZE];
    int top=-1;

    for(int i=0;i<length;i++)
    {
        if(top==-1)
        {
            stack[++top]=string[i];
            continue;
        }
        if(stack[top]==string[i])
        {
            count++;
            top--;
        }else
        {
            stack[++top]=string[i];
        }

    }
    if(count%2!=0)
        {
            printf("Yes\n");
        }else
        {
            printf("No\n");
        }
    return 0;
}
