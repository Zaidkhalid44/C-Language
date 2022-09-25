#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    sum=sum+2*i;
    printf("Sum of %d even natural number is %d",n,sum);
    return 0;

}