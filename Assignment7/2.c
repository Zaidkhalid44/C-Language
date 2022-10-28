#include<stdio.h>
int main()
{
    int a=-1,b=1,sum,N,i;
    printf("Enter the Nth term: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=a+b;
        printf(" %d",sum);
        a=b;
        b=sum;

    }
   
    
    return 0;
}