#include<stdio.h>
void prime(int);
void prime(int x)
{
    int i;
    for(i=2;x!=1;i++)
    {  
        while(x%i==0)
        {
        printf("%d ",i);
        x=x/i;
        }
    }
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    prime(x);
    return 0;
}