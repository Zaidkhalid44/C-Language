#include<stdio.h>
int main()
{
    int a=-1,b=1,sum,N,i;
    printf("Enter the Nth term: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(i==N)
        printf(" The %dth term is %d",N,sum);
    }
   
    
    return 0;
}