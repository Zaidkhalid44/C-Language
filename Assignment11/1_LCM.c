#include<stdio.h>
int lcm(int, int);
int main()
{
    int x,y,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    result=lcm(x,y);
    printf("%d",result);

    return 0;
}
int lcm(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0) && (i%y==0))
        return i;
    }
}