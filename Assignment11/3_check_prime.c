#include<stdio.h>
int prime(int);
int main()
{
    int x,result;
    printf("Enter a number you want to check: ");
    scanf("%d",&x);
    return prime(x);
    
}
int prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
        printf("The number %d is not prime",x);
        break;
        }
    }
    if(i==x)
    printf("The number is prime");
}