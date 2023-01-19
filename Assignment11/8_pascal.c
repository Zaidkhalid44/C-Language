#include<stdio.h>
int fact(int);
int comb(int, int);
void pascal(int);
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

void pascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i && k)
            {
            printf("%d",comb(i-1,r));
            k=0;
            r++;
            }
            else {
            printf(" ");
            k=1;
            }
        }
        
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    pascal(n);
}