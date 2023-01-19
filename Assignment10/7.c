#include<stdio.h>
int fact(int);
int comb(int, int);
int main()
{
    int n,r,result;
    printf("Enter the values of n, r: ");
    scanf("%d%d",&n,&r);
    result=comb(n,r);
    printf("%d",result);
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}