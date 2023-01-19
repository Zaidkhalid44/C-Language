#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",2*i-1);
}