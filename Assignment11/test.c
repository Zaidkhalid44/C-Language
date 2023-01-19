#include<stdio.h>
int lcm(int, int,int);
int main()
{
    int x,y,z,result;
    printf("Enter two numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    result=lcm(x,y,z);
    printf("%d",result);

    return 0;
}
int lcm(int x,int y,int z)
{
    int i;
    for(i=1;i<=x*y*z;i++)
    {
        if((i%x==0) && (i%y==0) && (i%z==0))
        return i;
    }
}