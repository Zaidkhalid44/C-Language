#include<stdio.h>
int hcf(int, int);
int main()
{
    int x,y,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    result=hcf(x,y);
    printf("The hcf of %d and %d is %d",x,y,result);
    return 0;
}
int hcf(int x,int y)
{
    int min;
    if(x>y)
    min=y;
    else
    min=x;
    int i,temp;
    for(i=2;i<=min;i++)
    {
        if((x%i==0) && (y%i==0))
        temp=i;
    }
    return temp;
}