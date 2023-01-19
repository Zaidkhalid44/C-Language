#include<stdio.h>
int prime(int, int);
int prime(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        
        }
        if(j==i)
        printf("%d ",i);
    }
    return 0;
    
}
int main()
{
    int x,y;
     printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    prime(x,y);
}