#include<stdio.h>
int main()
{
    int i,x,original_number;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        break;
    }
    if(x==1 || x<=0)
    {
    printf("Next prime number of %d is 2",x);
    goto a;
    }
    if(i==x)
    printf("Given number is prime number which is %d",x);
    else
    {
        original_number=x;
        for(i=2;i<x;i++)
        {
                if(x%i==0)
                ++x;
        }printf("Next prime number of %d is %d",original_number,x);
    }
   a: return 0;
}