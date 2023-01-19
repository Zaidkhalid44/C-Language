#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    s=fact(n);
    printf("%d",s);
    return 0;
}
int fact(int n)
{
    int i,fact;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}