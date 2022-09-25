#include<stdio.h>
int main()
{
    int n,i,x,count;
    printf("Enter any number: ");
    scanf("%d",&n);
    x=n;
    for(i=0;i<n;i++)
    {
        count=n%10;
        n=n/10;
    }
    printf("Digit in %d is %d",x,i);
    return 0;
}
