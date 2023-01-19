#include<stdio.h>
int prime(int);
int main()
{
    int x=2,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n)
    {
        if(prime(x))
        {
        printf("%d ",x);
        n--;
        }
         x++;
    }
   
}
int prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}