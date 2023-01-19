#include<stdio.h>
int fab(int);
int main()
{
    int n;
    printf("enter the values of n: ");
    scanf("%d",&n);
    fab(n);
    return 0;
}
int fab(int n)
{
    int i,a=-1,b=1,c;
    for(i=1;i<=n;i++)
    {
       c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return n;
}