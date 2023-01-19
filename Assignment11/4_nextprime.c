#include<stdio.h>
int nextprime(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    nextprime(x);
    return 0;
}
int nextprime(int x)
{
    int i,inc;
    inc=x+1;
    for(i=2;i<inc;i++)
    {
        if(inc%i==0)
        inc++;
        
    }
    if(i==inc)
    printf("%d",i);
    return 0;
}