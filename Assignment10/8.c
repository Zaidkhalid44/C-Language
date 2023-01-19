#include<stdio.h>
int fact(int);
int perm(int, int);
int main()
{
    int n,r,result;
    printf("Enter the values of n and r (n is greater than r): ");
    scanf("%d%d",&n,&r);
    if(n>=r)
    {
    result=perm(n,r);
    printf("%d",result);
    }
    else
    printf("n is less than r");
    
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
int perm(int n, int r)
{

    return fact(n)/(fact(n-r));
}