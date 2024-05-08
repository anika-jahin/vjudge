#include<stdio.h>
#include<math.h>
#define MAX 2000000099
int t,n,x,y,d;
int diff(int x,int y) //calculates the number of button presses needed to move from page x to page y
{
    return (abs(x-y)+(d-1))/d; //
}
int min(int a,int b) // find the minimum number of button presses
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    scanf("%d",&t);
   while(t--)
    {
        scanf("%d %d %d %d",&n,&x,&y,&d);
        int len=abs(x-y);
        int temp=MAX; // find the minimum number of button presses
        if(len%d==0) // Check if difference is divisible by d
            temp=min(temp,diff(x,y));
         len=y-1; //Check if reaching page 1 is possible
        if(len%d==0)
        {
            temp=min(temp,diff(x,1)+diff(1,y));
        }
         len=n-y; //Check if reaching page n is possible
        if(len%d==0)
        {
            temp=min(temp,diff(x,n)+diff(n,y));
        }
        if(temp==MAX) //If temp remains MAX, it's not possible to reach page y
        {
            temp=-1;
        }
        printf("%d\n",temp);
    }
    return 0;
}
